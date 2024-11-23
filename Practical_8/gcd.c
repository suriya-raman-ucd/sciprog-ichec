#include <stdio.h>

int greatestCommonDivisorRec(int a, int b){
    if(b<=0){
        return a;
    }
    return greatestCommonDivisorRec(b, a % b);
}

int greatestCommonDivisorIter(int a, int b){
        
        while(b!=0){
            int temp = b;
            b = a %b;
            a = temp;
        }
        return a;
}

int main() {
    int a,b;
    printf("Enter the values of a and b(separated by space:");
    scanf("%d %d", &a, &b);
    if(a < 0 || b <0){
        printf("Numbers must be greater than zero");
        return 0;
    }
    printf("\nThe greatest common divisor of a and b(Iterative): %d" ,greatestCommonDivisorIter(a,b) );
        printf("\nThe greatest common divisor of a and b(Recursive): %d" ,greatestCommonDivisorRec(a,b) );
    return 0;
}