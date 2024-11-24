#include <stdio.h>
#include <math.h>

/*
TODO: Write function declaration 
      for the calculation of the determinant of 3x3 matrix
*/


float getDetOfFourCrossFour(float hmat[4][4]);

float getdet(float minor[3][3]);


int main(void) {

//TODO: Complete variable declarations
   float hmat[4][4], minor[3][3];
    int n=4;
//TODO: Initialise Hilbert matrix and print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            hmat[i][j] = (1.0 / ((i+1.0) + (j+1.0) - 1.0));
        }
    }
    
    // Print the Hilbert Matrix
    for(int i=0;i<n;i++){
        printf("| ");
        for(int j=0;j<n;j++){
            // printf("%0.4f  ", hmat[i][j]);
                        printf("%.4f  ", hmat[i][j]);

        }
        printf("|\n");
    }


//TODO: Find determinant of 4x4 Hilbert matrix using Cramer rule
    
    float detHilbertMat = getDetOfFourCrossFour(hmat);
    printf("\nThe determinant of 4x4 Hilbert Matrix : %e\n", detHilbertMat);

//TODO: Print calculated determinant

    

    

    return 0;
}

//TODO: Complete function definition to get determinant  
float getdet(float minor[3][3]) {
    
    float determinant = (minor[0][0]*((minor[1][1]*minor[2][2]) - (minor[1][2]*minor[2][1])));
    determinant -= (minor[0][1]*((minor[1][0]*minor[2][2]) - (minor[1][2]*minor[2][0])));
    determinant += (minor[0][2]*((minor[1][0]*minor[2][1]) - (minor[2][0]*minor[1][1]))); 
        
    return determinant; 

}


float getDetOfFourCrossFour(float hmat[4][4]) {
    float determinant = 0; // Initialize to 0

    for (int i = 0; i < 4; i++) { // For each column of the 0th row of the 4x4 matrix
        float subMatrix[3][3];

        // Create the 3x3 submatrix
        for (int j = 1; j < 4; j++) {
            int m = 0;
            for (int k = 0; k < 4; k++) {
                if (k != i) { // Ignore the column corresponding to the current row
                    subMatrix[j - 1][m++] = hmat[j][k]; // Use original values
                }
            }
        }

        // Calculate determinant using cofactor expansion
        determinant += (pow(-1, i) * hmat[0][i] * getdet(subMatrix));
    }



    return determinant;
}