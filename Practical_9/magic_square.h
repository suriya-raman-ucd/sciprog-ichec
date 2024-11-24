#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    // TODO: Checking that every row and column add up to M


    // TODO: Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square
    int rowSum=0, colSum=0, majDiagSum=0, minDiagSum=0;
    
    for(int i=0;i<n;i++){
        rowSum=0;
        colSum=0;
        for(int j=0;j<n;j++){
            // Rows are added
            rowSum+=square[i][j];
            
            //Columns are added
            colSum+=square[j][i];
            //Diagonals
            
            //Major Diag Sum
            if(i==j){
                majDiagSum+=square[i][j];
            }
            
            //Minor Diag Sum
            if((i+j) == n-1){
                minDiagSum+=square[i][j];
            }
            
        }
        
        if(rowSum!=M || colSum!=M){
            return 0;
        }
    }
    if(majDiagSum!=M || minDiagSum!=M){
        return 0;
    }
    return 1;
}
