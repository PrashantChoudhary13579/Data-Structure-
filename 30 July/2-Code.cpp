Aim= We are given an array of n consecutive numbers and we have to find the one which is missing from it 
Algorithm:

Take the input array of consecutive numbers.
Create a function that converts each number to its binary representation without using any arithmetic operations (such as addition, subtraction, etc.).
For each number in the array, convert it to binary using the binary conversion function and print the result.
Print the binary representation of each number in the array, as well as the binary of the suspected missing number.

Output: The binary representations of all the numbers in the array, including the suspected missing number.

Time Complexity: O (n.log(n))
Space Complexity: O (1)

#include<iostream>
#include<math.h>
using namespace std;

int binary(int n) {
    int binary = 1, ans = 0, i = 0;
    while (n != 0) {
        binary = n & 1;
        ans = (binary * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}
int main() {
    int arr[8] = {7, 8, 9, 12, 13, 14, 15, 16};
    int brr;
    for (int i = 0; i < 8; i++) {
        brr = binary(arr[i]);
        cout << brr << "  ";
    }
    int n = 7;
    cout << endl << "Binary of missing number: " << binary(n);

    return 0;
}
