#include<stdio.h>

//Fibonacci function with pass by reference arguments
void fibo(int *a, int *b){
    *b=*a+*b;
    *a=*b-*a;
}

int main(){

    int n,a=0,b=1;

    printf("Enter the value of N for Fibonacci Series : ");
    scanf("%d", &n);
    printf("Fibonacci Series (until %d): ", n);
    // If n =0, then we just print 0
    if(n == 0){
        printf("%d ", n);
    }
    // We pass the address of the variables a and b
    for(int i=1;i<=n;i++){
        printf("%d ", a);
        fibo(&a, &b);
    }

    return 0;
}