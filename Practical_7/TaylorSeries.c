// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n){ // To avoid Integer Overflow
    if(n <= 0){
        return 1;
    }
    return n*factorial(n-1);
}



int main() {

double *termArray;
int n;
printf("\nEnter the degree of the polynomial:");
scanf("%d", &n);

termArray = (double *)malloc(n * sizeof(double));


for(int i=0;i<n;i++){
    termArray[i] = (1 / (double)(factorial(i)));
    printf("\ntermArray - %d: %.10lf", i+1, termArray[i]);
}

double e = 0;
for(int i=0;i<n;i++){
    e+=(termArray[i]);
}
printf("\nValue of the Taylor series ( e) : %.10lf", e);
free(termArray);
return 0;
}