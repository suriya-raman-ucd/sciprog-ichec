#include <stdio.h>

#define n 5  // No. of rows for A and C
#define p 3  // No. of columns for A, Rows in B
#define q 4  // No. of columns for B and C

void matmult(double a[n][p], double b[p][q], double c[n][q]) {
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j] = 0.0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    double a[n][p], b[p][q], c[n][q];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            a[i][j] = i + j;
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            b[i][j] = i - j;
        }
    }

    matmult(a, b, c);

    printf("Matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%5.1f ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%5.1f ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Multiplation of (A * B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%5.1f ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}