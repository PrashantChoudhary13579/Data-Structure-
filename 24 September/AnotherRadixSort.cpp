#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getMax (const vector<int> &arr)
{
    return * max_element(arr.begin(),arr.end());
}
void count;