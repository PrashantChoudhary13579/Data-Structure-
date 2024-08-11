//We have to write the code for binary Search and have an option to opt whether iterative or recursive
#include<iostream>
using namespace std;
int binaryiterative(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
   while (low<=high)
   {
         if(arr[mid]==key)
         {
            return mid;
            
         }
        else if (arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        mid=low+(high-low)/2;   
    }
     return mid;
}
int main(){
    int arr[5]={2,3,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int key ;
    cout<<"Enter the number as key "<<endl;
    cin>>key;
    int y=binaryiterative(arr,n,key);
    cout<<"The value is at index "<<y<<endl;
    
    
    return 0;
}