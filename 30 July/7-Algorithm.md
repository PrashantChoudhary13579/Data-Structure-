Aim = We are given an array of n consecutive numbers and we have to find the one which is missing from it 
    Without using any addition , subtraction, multiplication, division
    We are given that we have decimal,binary, hexadecimal representation
Algorithm = 
1. Make a Function to find the missing number using XOR
2. Total numbers should be n, so the array has n-1 elements
3. Make two variables (xorArray and xorFull) which has the value 0.
4. XOR all numbers in the array
5. XOR of xorFull and xorArray gives the missing number
6. Now take an array with consecutive numbers and one missing.
7. Pass that array into the function and we will get the output.

Output = We will get the missing number.