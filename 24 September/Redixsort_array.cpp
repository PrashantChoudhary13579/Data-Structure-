#include<iostream>
using namespace std;
int getMax(int arr[], int n, int exp)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
void countsort (int arr[], int n, int exp)
{
    int output[n];
    int i , count[10]= {0};
    for (int i = 0; i < n; i++)
    {
        count [(arr[i]/exp)% 10]++;
    }
    for (int i = 0; i < 10; i++)
    {
        count[i] += count[i-1];
    }
    for (int i = n-1; i >=0; i)
    {
        output
    }
    
    
    
}
 int main ()
 {

 }