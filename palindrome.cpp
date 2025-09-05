#include<iostream>
using namespace std;

int palindrome(int head[], int n)
{   int tail[100]; // Assuming a maximum size of 100 for simplicity
    for(int i = 0; i<n; i++)
    {
        tail[i]=head[n-1-i]; // Reverse the array
    }
    for(int i = 0; i<n; i++)
    {   
        cout<<tail[i]<<" ";
    }
    for(int i = 0; i<n; i++)
    {   
    
        if(head[i]==tail[i])
        {
            cout<< "\nit's a palindrome";
        }
        else
        {
            cout<<"\nIt's not a palindrome";
        }
    
    return 0; // Default return if no conditions met
}
}
int main()
{
    int n=2;
    int head[100]={2,1}; 
    
    palindrome(head, n);
    

    return 0;
}