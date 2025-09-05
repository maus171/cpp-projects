#include<iostream>
using namespace std;

class stack {
    int top;
    int size;

    public:
       stack()
         {
              top=-1;
              size=100;
         }
     void push(int arr[],int val)
     {
          if(top==size-1)
          { 
               cout<<"Stack overflow";
          }
          else{
               top++;
               arr[top]=val;
          }
     }
     void pop(int arr[])
     { 
          if(top==-1)
          { cout<<"stack underflow";}
          else
          {  top--;
             cout<<"popped element is "<<arr[top+1]<<endl;
          }
     }
     void print_stack(int arr[])
     {
          for(int i=top;i>=0;i--)
          { cout<<arr[i]<<" ";}
          cout<<endl;
     }
};
int main()
{   int arr[100];
     cout<<"stack implementation using array"<<endl;
    stack s;
    s.push(arr,10);
    s.push(arr,20);
    s.push(arr,30);
    s.push(arr,40);
    
    s.pop(arr);
     s.print_stack(arr);
    
    return 0;
}