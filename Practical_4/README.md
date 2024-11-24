## Practical 4

Calculating tan(x) and the Area Under the Curve Using the Trapezoidal Rule

-We define a global array to store tan(x) values for angles from 0 to 60 degrees in 5-degree steps.
-We create a function to convert degrees to radians.
-In the main program, we loop through angles, convert them to radians, compute tan(x), and store the results in the array.
-We use the Trapezoidal Rule to calculate the area under the curve of tan(x) from 0 to 60 degrees.
-Finally, we print the tan(x) values and the computed area.


Use -lm to execute without errors


### Program outputs

**Practical-4.c **

Execute: 
gcc -o prac4 Practical-4.c -lm

./prac4

```Shell
Tan(x) values for every 5 degrees:
Tan(0°) = 0.000000
Tan(5°) = 0.087489
Tan(10°) = 0.176327
Tan(15°) = 0.267949
Tan(20°) = 0.363970
Tan(25°) = 0.466307
Tan(30°) = 0.577350
Tan(35°) = 0.700207
Tan(40°) = 0.839099
Tan(45°) = 0.999999
Tan(50°) = 1.191752
Tan(55°) = 1.428146
Tan(60°) = 1.732047
Approximate area under tan(x): 0.695043
```
