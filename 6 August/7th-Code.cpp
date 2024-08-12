// Recursion of sum of n numbers 
#include<iostream>
using namespace std;

// making a function of sumarray passing the arguments array,sum,i
void sumarray(int array[], int sum,int i)
{
    // until i
    if (i < 10)
    {
        sum += array[i];
        i++;
        sumarray(array,sum,i);
    }
    else
      {
            cout<< sum;
      }
}
int main(){
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0, i = 0;
    sumarray(array, sum,i);
   
}