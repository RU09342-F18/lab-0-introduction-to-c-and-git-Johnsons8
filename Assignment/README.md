# Lab 0
This is a simple implementation of different math functions

## Header (math.h)
math.h sets up the inputs and output of the math function. The inputs of the function are integers 'num1' and 'num2' which are whole number integers, and then the other input is an operator under the name of 'Operator' using the data type char, which is a character in the ASCII keyboard.

## Implementation (math.c)
The implementation of the math function implementing the header (math.h) was done with a nested if statement where the first checks to see if there were values inputted or not, and then does math based off of the given operators.

### Usable Operators
1. + Add (num1 + num2)
2. - Subtract (num1 - num2)
3. * Multiply (num1 * num2)
4. / Divide (num1 / num2)
5. % Modulus (num1 % num2)
6. < Left Shift (num1 << num2)
7. > Right Shift (num1 >> num2)
8. & Bitwise AND (num1 & num2)
9. | Bitwise OR (num1 | num2)
10. ^ Bitwise XOR (num1 ^ num2)
11. ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
