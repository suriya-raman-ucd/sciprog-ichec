## Practical 3

Tangent Approximation

-We need to calculate the integral of f(x) = tan(x) from 0 to π/3, which equals log(2).

-We'll set a = 0 and b = π/3.

-First, we'll calculate the sum of tan(0) and tan(π/3).

-We can use the tan function from the math library, which is available in FORTRAN by default.

-Next, we'll create a loop to generate just 5 evenly spaced points between 0 and π/3, giving us a total of 6 points.

-We'll add 2 * tan(xi) for each of the interior points (those between 0 and π/3, not including the endpoints).

-After that, we'll add the sum of the endpoint values to this total and multiply by (b - a) / 2N.

-Finally, we'll compare the result with log(2), and our approximation should be close to the exact value.


### Program outputs

**Practical3.c **

Execute: 
gcc -o prac3 Practical3.c -lm

./prac3

```Shell
Integral of tan(x) :0.694817
Value of log(2) : 0.693147
Difference between integral of tan(x) and log(2) : 0.001669
```
