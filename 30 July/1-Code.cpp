// This is the code one of 30 July
// Aim = We have given an array of n numbers and now we have to find the elements which follows a+b=c;
#include <iostream>
using namespace std;
int main()
{
    int arr[100] = {4, 5, 3, 6, 2, 7};
    int n = 6;
    cout<<"The indexes are which follow the condition are -"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
    return 0;
}