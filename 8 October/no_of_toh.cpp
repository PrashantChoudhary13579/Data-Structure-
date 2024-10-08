#include<iostream>
using namespace std;
 static int count =0;

void TOH( int n , char f , char a, char t)
{
    if (n==1)
    {
        count++;
        return ;
    }
    else {
        TOH(n-1,f,t,a);
        TOH(n-1,a,f,t);
    }
}
int main()
{
    char A,B,C;
   int arr[19];
   int arrcount[19];
   int k=0,l=0;
    for (int i = 2; i < 20; i++)
    {
        count = 0;
        TOH(i,'A','B','C');
        cout<<"total traverse when n= "<<i<<" - "<<count<<endl;
        arr[k++]=count;
        arrcount[l++]=i;
    }
    cout<<endl;
    for( int i=0;i<19;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    for( int i=0;i<19;i++){
        cout<<arrcount[i]<<", ";
    }
    

}