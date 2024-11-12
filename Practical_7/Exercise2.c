
#include <stdio.h>
#include<stdlib.h>


int *allocatearray(int n){
    return (int *)malloc(n * sizeof(int));
}

void fillwithones(int *arrayPointer, int arraySize){
    for(int i=0;i<arraySize; i++){
        arrayPointer[i] = 1;
    }
}

void printarray(int *arrayPointer, int arraySize){
    
    for(int i=0;i<arraySize; i++){
        printf("Element %d : %d\n", i+1, arrayPointer[i]);
    }
}

void freeMemory(int *arrayPointer){
    free(arrayPointer);
}

int main() {

int arraySize;

// printf("\nEnter the size of the Array:");
// scanf("%d", &arraySize);


for(int i=0;i<20; i++){
    int arraySize = rand() % 20;
    int *intArray = allocatearray(arraySize);
printf("Attempt %d with array Size %d:\n", i+1, arraySize);

fillwithones(intArray, arraySize);
printarray(intArray, arraySize);
freeMemory(intArray);
printf("\n\n");
}

}