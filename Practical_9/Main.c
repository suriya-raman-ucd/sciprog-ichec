#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // TODO: Open the file 
    FILE *fp;
    fp = fopen(filename, "r");
    
    

    int i;
    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 

    int **magicSqre = (int **)malloc(n * sizeof(int *));
    for(int i=0;i<n;i++){
        magicSqre[i] = (int *)malloc(n * sizeof(int));
    }

    // TODO:inputting integer data into the matrix;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fscanf(fp, "%d", &magicSqre[i][j]);
        }  
    }
    
    
    if(isMagicSquare(magicSqre, n) == 0){
        printf("Not a Magic Square\n");
    }else{
        printf("It is a magic square\n");
    }

    // TODO: Freeing each row separately before freeing the array of pointers
    for(int i=0;i<n;i++){
        free(magicSqre[i]);
    }
    
    free(magicSqre);
    
    // TODO:Close the file
    fclose(fp);

    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}
