#include<stdio.h>
#include<math.h>

# define PI 3.1412

int main(){
    double val, sum, a=0, b = PI / 3;
    int n = 12;
    double radian15 = ((b-a) / n) ;




    // Adding first and last term of the equation

    sum = tan(a) + tan(b);


    // Using 'for' loop method to sum the 2 tan value of those 11 equidistant points

    for(int i=1;i<n;i++){
        sum += (2 * tan((i) * radian15));
    }
    
    // Calculating the value by multiplying the sum by (b-a)/2n
    val = sum * radian15 / 2;
    
    // Printing those results
    printf("Integral of tan(x) :%lf\n", val);
    printf("Value of log(2) : %lf\n", log(2));
    printf("Difference between integral of tan(x) and log(2) : %lf", val - log(2));

}


