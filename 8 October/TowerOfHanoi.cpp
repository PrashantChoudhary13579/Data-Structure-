#include<iostream>
using namespace std;

void TOH( int n , char f , char a, char t)
{
    if (n==1)
    {
        cout<<"Moving disk 1 from "<<f <<" to "<<t<<endl;

    }
    else {
        TOH(n-1,f,t,a);
        cout<<"Moving disk "<<n<<" from "<< f<<" to "<<t<<endl;
        TOH(n-1,a,f,t);
    }
}
int main()
{
    char A,B,C;
    int n;
    cout<<"Enter the number of n"<<endl;
    cin>>n;
    TOH(n,'A','B','C');

}