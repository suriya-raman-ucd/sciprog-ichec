## Practical 5


Fibonacci series


1. We ask the user to input the value of **n** (the number of terms in the Fibonacci series).

2. We create a function that takes two arguments: **Fn-1** and **Fn-2**. On input, these arguments represent the previous two Fibonacci numbers, and on exit, they will hold **Fn** and **Fn-1**, respectively.

3. We use a loop to calculate the entire Fibonacci series up to **n**.

4. Finally, we print out the Fibonacci series.



The Inverse Hyperbolic Tangent function


1. We ask the user to input a positive real number **delta**, which will be used as the precision for our approximation.

2. We implement the first function **artanh1(x)** using the Maclaurin series for **arctanh(x)**. The series will stop when the terms become smaller than **delta**.

3. We implement the second function **artanh2(x)** using the natural logarithm formula for **arctanh(x)**, leveraging built-in logarithm functions.

4. In the main program, we calculate **arctanh(x)** for **x** in the range \([-0.9, 0.9]\), sampled every 0.01, using both methods. We store the results in separate arrays.

5. Finally, we compare the accuracy of both methods by checking the difference between their results to 10 significant figures.


Use -lm to execute without errors


### Program outputs

**Fibonacci.c **

Execute: 
gcc -o Fibonacci Fibonacci.c

./Fibonacci

```Shell
Enter the value of N for Fibonacci Series : 6
Fibonacci Series (until 6): 0 1 1 2 3 5
```


<br>

**Fibonacci.c **

Execute: 
gcc -o Hype HyperbolicComparison.c

./Hype

```Shell
Enter the delta : 19
-0.90 - is not a Match
-0.89 - is not a Match
-0.88 - is not a Match
-0.87 - is not a Match
-0.86 - is not a Match
-0.85 - is not a Match
-0.84 - is not a Match
-0.83 - is not a Match
-0.82 - is not a Match
-0.81 - is not a Match
-0.80 - is not a Match
-0.79 - is not a Match
-0.78 - is not a Match
-0.77 - is not a Match
-0.76 - is not a Match
-0.75 - is not a Match
-0.74 - is not a Match
-0.73 - is not a Match
-0.72 - is not a Match
-0.71 - is not a Match
-0.70 - is not a Match
-0.69 - is not a Match
-0.68 - is not a Match
-0.67 - is not a Match
-0.66 - is not a Match
-0.65 - is not a Match
-0.64 - is not a Match
-0.63 - is not a Match
-0.62 - is not a Match
-0.61 - is not a Match
-0.60 - is not a Match
-0.59 - is not a Match
-0.58 - is not a Match
-0.57 - is not a Match
-0.56 - is not a Match
-0.55 - is not a Match
-0.54 - is not a Match
-0.53 - is not a Match
-0.52 - is not a Match
-0.51 - is not a Match
-0.50 - is not a Match
-0.49 - is not a Match
-0.48 - is not a Match
-0.47 - is not a Match
-0.46 - is not a Match
-0.45 - is not a Match
-0.44 - is not a Match
-0.43 - is not a Match
-0.42 - is not a Match
-0.41 - is not a Match
-0.40 - is not a Match
-0.39 - is not a Match
-0.38 - is not a Match
-0.37 - is not a Match
-0.36 - is not a Match
-0.35 - is not a Match
-0.34 - is not a Match
-0.33 - is not a Match
-0.32 - is not a Match
-0.31 - is not a Match
-0.30 - is not a Match
-0.29 - is not a Match
-0.28 - is not a Match
-0.27 - is not a Match
-0.26 - is not a Match
-0.25 - is not a Match
-0.24 - is not a Match
-0.23 - is not a Match
-0.22 - is not a Match
-0.21 - is not a Match
-0.20 - is not a Match
-0.19 - is not a Match
-0.18 - is not a Match
-0.17 - is not a Match
-0.16 - is not a Match
-0.15 - is not a Match
-0.14 - is not a Match
-0.13 - is not a Match
-0.12 - is not a Match
-0.11 - is not a Match
-0.10 - is not a Match
-0.09 - is not a Match
-0.08 - is not a Match
-0.07 - is not a Match
-0.06 - is not a Match
-0.05 - is not a Match
-0.04 - is not a Match
-0.03 - is not a Match
-0.02 - is not a Match
-0.01 - is not a Match
0.00 - is a Match
0.01 - is not a Match
0.02 - is not a Match
0.03 - is not a Match
0.04 - is not a Match
0.05 - is not a Match
0.06 - is not a Match
0.07 - is not a Match
0.08 - is not a Match
0.09 - is not a Match
0.10 - is not a Match
0.11 - is not a Match
0.12 - is not a Match
0.13 - is not a Match
0.14 - is not a Match
0.15 - is not a Match
0.16 - is not a Match
0.17 - is not a Match
0.18 - is not a Match
0.19 - is not a Match
0.20 - is not a Match
0.21 - is not a Match
0.22 - is not a Match
0.23 - is not a Match
0.24 - is not a Match
0.25 - is not a Match
0.26 - is not a Match
0.27 - is not a Match
0.28 - is not a Match
0.29 - is not a Match
0.30 - is not a Match
0.31 - is not a Match
0.32 - is not a Match
0.33 - is not a Match
0.34 - is not a Match
0.35 - is not a Match
0.36 - is not a Match
0.37 - is not a Match
0.38 - is not a Match
0.39 - is not a Match
0.40 - is not a Match
0.41 - is not a Match
0.42 - is not a Match
0.43 - is not a Match
0.44 - is not a Match
0.45 - is not a Match
0.46 - is not a Match
0.47 - is not a Match
0.48 - is not a Match
0.49 - is not a Match
0.50 - is not a Match
0.51 - is not a Match
0.52 - is not a Match
0.53 - is not a Match
0.54 - is not a Match
0.55 - is not a Match
0.56 - is not a Match
0.57 - is not a Match
0.58 - is not a Match
0.59 - is not a Match
0.60 - is not a Match
0.61 - is not a Match
0.62 - is not a Match
0.63 - is not a Match
0.64 - is not a Match
0.65 - is not a Match
0.66 - is not a Match
0.67 - is not a Match
0.68 - is not a Match
0.69 - is not a Match
0.70 - is not a Match
0.71 - is not a Match
0.72 - is not a Match
0.73 - is not a Match
0.74 - is not a Match
0.75 - is not a Match
0.76 - is not a Match
0.77 - is not a Match
0.78 - is not a Match
0.79 - is not a Match
0.80 - is not a Match
0.81 - is not a Match
0.82 - is not a Match
0.83 - is not a Match
0.84 - is not a Match
0.85 - is not a Match
0.86 - is not a Match
0.87 - is not a Match
0.88 - is not a Match
0.89 - is not a Match
0.90 - is not a Match
```
