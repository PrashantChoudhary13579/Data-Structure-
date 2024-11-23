#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr) {
    int n = arr.size() + 1;  // Total numbers should be n, so the array has n-1 elements
    int xorFull = 0;
    int xorArray = 0;
   
    for (int i = 1; i <= n; ++i) {
        xorFull ^= i;
    }
    
    for (int num : arr) {
        xorArray ^= num;
    }
    return xorFull ^ xorArray;
}

int main() {
    vector<int> numbers = {1,2,3,4,5,7,8,9}; 
    int missingNumber = findMissingNumber(numbers);
    cout << "The missing number is " << missingNumber << endl;
    
    return 0;
}
