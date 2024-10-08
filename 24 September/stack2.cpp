// #include<iostream>
// #include<stack>
// using namespace std;
//  void display_stack(stack<string> st)
//     {
//         while (!st.empty())
//         {
//             cout<< st.top() <<",";
//             st.pop();
//         }
//         cout<<endl;
        
//     }
// int main()
// {
//     stack <string> languages;
//     languages. push("C++");
//     languages.push("java");
//     languages.push("python");
//     // printing the top element
//     while (!languages.empty())
//     {
//       cout << languages.top()<<endl;
//       languages.pop();
      
//     }
//     cout<<endl;
    
  

//     stack <int> number;
//     number.push(10);
//     number.push(20);
//     number.push(30);
//     number.push(40);
//     number.push(50);
//     // printing the top elements 

//     while (! number.empty())
//     {
//         cout<< number.top() <<endl;
//         number.pop();
//     }
    
// }
#include <iostream>
using namespace std;
#define n 100

class stack{
    int * arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }
    void push (int x)
    {
        if (top = n-1)
        {
            cout<<"Stack  overflow"<<endl;
            return ;
        }
        top++;
        arr[top]=x;
        
    }
    void pop()
    {
        if (top == -1)
        {
            cout<<"No element to pop "<<endl;
            return ;
        }
        top--;
        
    }
    int top()
    {
        return arr[top];
    }
};