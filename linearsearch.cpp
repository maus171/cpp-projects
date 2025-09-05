#include<iostream>
using namespace std;

void linearsearch(int arr[], int n, int key){
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
}
int main() {
    int arr[5] = { 5, 4, 2, 1, 3 };
    cout << "Original array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int key;
    linearsearch(arr, 5, 4);
    return 0;
}