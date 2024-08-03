// Aim = In this question we have given the coordinate (x,y) in which x is shown with the help of the x-axis and y is shown with the help of some values of the given array , a[i]. Now we have to find the maximum volume occupied by the container formed with the edges. In which the first edge is formed with the help of (x,0)and (x,a[i]) while the other edge is formed with the help of (m,0) and (m, a[j]). where x,m are the points on the x-axis and i,j are the indexes of the array
#include <iostream>
using namespace std;

float cylinder(int r, int h)
{
    float cylvol;
    cylvol = 3.14 * r * r * h;
    return cylvol;
}
float remaining(int r, int h)
{

    float cylvol;
    cylvol = 3.14 * r * r * h;
    return cylvol / 2;
}

int main()
{
    int arr[10] = {10,20,30,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    float large=0;

    // cout << n;
    int h = 0, height;
    int r = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            r = (j - i) / 2;
            if (arr[j] < arr[i])
            {
                h = arr[j];
                height = arr[i] - arr[j];
            }
            else
            {
                h = arr[i];
                height = arr[j] - arr[i];
            }
               float volume = cylinder(r, h) + remaining(r, height);

            if(large<volume)
                {
                    large=volume;
                }
        }
    }
    cout<<endl;
    cout<<"The max volume is - "<<large<<endl;
 

    return 0;
}