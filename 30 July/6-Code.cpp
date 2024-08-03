//Aim = We are given that a ball is falling on the ground with velocity v and at each bounce its velocity decreases by half. Then find the number of bounces 
#include<iostream>

using namespace std;

int main(){
    int v=10;
    int count=0;
    while(v!=0)
    {
        count++;
        v=v/2;
    }
    cout<<"The number of bounces are "<<count;
    
    return 0;
}
