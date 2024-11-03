#include <stdio.h>
#include <math.h>
# define N 13


//Declaring tanArray as global variable
double tanArray[13];

// Converting degrees to radians
double degreeToRadian(int degree) {
    return degree * 3.14159 / 180.0;
}

// Calculate values of tan(x) and storing it in an array
void initTanArray() {
    for (int i = 0; i < N; i++) {
        double radian = degreeToRadian(i*5);        
        tanArray[i] = tan(radian);           
    }
}


//Function to calculate area under tan(x)
double areaUndrTan(int n) {
    double s = 0.0;
    double h = 3.14159 / 180.0 * 5;  
    int i;
    for (i = 0; i < n - 1; i++) {
        // Trapezoidal Rule
        s += (tanArray[i] + tanArray[i + 1]) * h / 2;  
    }

    return s;
}

int main() {
    initTanArray();  

    // Printing tan(x) values for every 5 degrees
    printf("Tan(x) values for every 5 degrees:\n");

    //For-loop to print tan(x) values from 0 to 60
    for (int i = 0; i < N; i++) {
        printf("Tan(%d°) = %f\n", i * 5, tanArray[i]);
    }

    // Calculating area under tan(x) values
    double area = areaUndrTan(N);
    printf("Approximate area under tan(x): %lf\n", area);

    return 0;
}
