#include <iostream>
#include <vector>

using namespace std;

// Function to find the missing number using XOR
int findMissingNumber(const vector<int>& arr) {
    int n = arr.size() + 1;  // Total numbers should be n, so the array has n-1 elements
    
    int xorFull = 0;
    int xorArray = 0;
    
    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        xorFull ^= i;
    }
    
    // XOR all numbers in the array
    for (int num : arr) {
        xorArray ^= num;
    }
    
    // XOR of xorFull and xorArray gives the missing number
    return xorFull ^ xorArray;
}

int main() {
    // Example array with consecutive numbers and one missing
    vector<int> numbers = {1,2,3,4,5,7,8,9};  // Missing number is 6
    
    // Find and print the missing number
    int missingNumber = findMissingNumber(numbers);
    cout << "The missing number is " << missingNumber << endl;
    
    return 0;
}
