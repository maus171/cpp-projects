#include<iostream>
using namespace std;    
                                                                
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1; //Base case: factorial of 0 or 1 is 1
    }

    else
    {
        return n* fact(n-1); //Recursive case

    }
}

int main()
{
    int n=5;

    if(n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial of " << n << " is " << fact(n) << endl;
    }

    return 0;
}