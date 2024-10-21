// practice - 1 of tower of hanoi
/*
#include<iostream>
using namespace std;
void towerofhanoi(int n,char A, char B, char C)
{
    if (n==1)
    {
        cout<<"Move disk "<<n<<" from "<< A << " to "<<C<<endl;
    }
    else
    {
        towerofhanoi(n-1,A,C,B);
        
        cout<<"Move disk "<<n<<" from "<< A << " to "<<C<<endl;

        towerofhanoi(n-1,B,A,C);
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    char A,B,C;
    towerofhanoi(n,'A','B','C');

}
*/

// Practice 2 of finding the number 
#include<iostream>
using namespace std;
static int count=0;
void towerofhanoi(int n,char A, char B, char C)
{
    
    if (n==1)
    {
       count++;
       return ;
    }
    else
    {
        towerofhanoi(n-1,A,C,B);
        towerofhanoi(n-1,B,A,C);
    }
    
}
int main()
{
    // int count =0;
    int a[20], k=0,l=0,arr_val[20];
    for (int i = 1; i <= 20; i++)
    {
        count =0;
        towerofhanoi(i,'A','B','C');
        cout<<"no of toh "<<i<<" = "<<count<<endl;
        a[k++]=i;
        arr_val[l++] = count;

    }
    for (int i = 1; i <= 20; i++)
    {
       cout<<a[i]<<" ";
       
    }
    cout<<endl;
    for (int i = 1; i <= 20; i++)
    {
       cout<<arr_val[i]<<" ";
    }
    
}