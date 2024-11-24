## Practical 6


Matrix Multiplication




1. We define **n = 5**, **p = 3**, and **q = 4**.

2. We declare three arrays **A**, **B**, and **C** of type **double** (or **real**).

3. We initialize array **C** to zero, and:
   - For array **A**, set **A(i,j) = i + j**.
   - For array **B**, set **B(i,j) = i - j**.

4. We use the provided schematic to calculate the elements of **C** (likely matrix multiplication or some other operation).

5. We print out the three arrays **A**, **B**, and **C** (one row per line) and verify that the results are correct.



### Program outputs

**Practical-6.c**

Execute: 
gcc -o P6 Practical-6.c

./P6

```Shell
Matrix A:
  0.0   1.0   2.0 
  1.0   2.0   3.0 
  2.0   3.0   4.0 
  3.0   4.0   5.0 
  4.0   5.0   6.0 

Matrix B:
  0.0  -1.0  -2.0  -3.0 
  1.0   0.0  -1.0  -2.0 
  2.0   1.0   0.0  -1.0 

Matrix Multiplation of (A * B):
  5.0   2.0  -1.0  -4.0 
  8.0   2.0  -4.0 -10.0 
 11.0   2.0  -7.0 -16.0 
 14.0   2.0 -10.0 -22.0 
 17.0   2.0 -13.0 -28.0 
```


