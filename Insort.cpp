#include<iostream>
#include <iomanip>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n ; i++) {
        int curr = arr[i];
        int prev= i - 1;
        while(prev>=0 && arr[prev]>curr)
        {        swap(arr[prev], arr[prev+1]);
            prev--;
        }
        
        
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
        int arr[5] = { 5, 4, 2, 1, 3 };
        insertionSort(arr, 5);
          
    return 0;
    }