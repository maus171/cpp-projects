#include<iostream>
#include<string.h>
using namespace std;

void stringsort(string arr[], int n) 
 {   for (int i =0 ; i<n ; i++)
    { 
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(strcmp(arr[j] , arr[j+1])>0)
            {   const char* temp= arr[j];
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);
            }
    }
}
 }
int main() {
    string arr[] = { "apple", "banana", "kiwi", "orange", "grape" };
    int n = sizeof(arr) / sizeof(arr[0]);
    stringsort(arr, n);
    cout << "Sorted array of strings: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}