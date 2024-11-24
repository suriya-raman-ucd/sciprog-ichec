// TODO: Complete the inclusion of necessary libraries
#include <stdio.h>
#include <math.h>

int main() {

//TODO: Complete variable declarations
    int n;
    
    printf("Enter the value of n:");
    scanf("%d", &n);

// TODO: Enter the number of data points  


    float x[n], y[n];
    
    float sum_x_y = 0;
    float sum_x = 0;
    float sum_x_x =0;
    float sum_y = 0;
    float alpha_numerator, alpha_denominator, alpha, beta;

// TODO: Enter (xi, yi) values i=1, 2, ..., n
//       Note that C array indices start from 0


    printf("\nNow enter the values of Xi and Yi in pairs separated by space:\n");
    
    for(int i=0;i<n;i++){
        scanf("%f\t%f", &x[i], &y[i]);
    }
    
    

    
    
    for(int i=0;i<n;i++){
        sum_x_y += (x[i]*y[i]);
        sum_x += (x[i]);
        sum_x_x += (pow(x[i], 2));
        sum_y += (y[i]);
    }
    


/*
TODO: Calculate alpha and beta formulas
      Use the pow() function for the calculation of power of 2 in the formula.
      Check and exit the code if the denominator for a is equal to zero.
*/

    
    alpha_numerator = ((n*sum_x_y) - (sum_x * sum_y));
    alpha_denominator = (n * sum_x_x) - (pow(sum_x, 2));
    
    
    if(alpha_denominator == 0){
        printf("Division by zero not possible, means all the entries of x are same, so there is no linear relationship");
        exit(0);
    }
    
    alpha = alpha_numerator / alpha_denominator ;
    printf("Alpha value : %f\n" , alpha);
    
    
    beta =( ((sum_y) - (alpha * sum_x)) / n );
    printf("Beta value : %f\n" , beta);


//TODO: Print the equation of the line 


    printf("Regression Equation : y = %.3f x + %.3f\n", alpha, beta);

    return 0;
}