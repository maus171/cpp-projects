#include<iostream>
#include <iomanip>  
#include <vector>
using namespace std;
int partition(vector<int>& arr, int st, int end) {
    int idx=st-1;
    int pivot=arr[end];
    for(int j=st;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx ++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quicksort(vector<int>& arr, int st, int end) {
if(st < end) {
    int pivot_index = partition(arr,st,end);
    quicksort(arr,st,pivot_index-1);
    quicksort(arr,pivot_index+1,end);
}
   
}
int main() {
    vector <int> arr = { 5, 4, 2, 1, 3 };
    quicksort(arr, 0, 4);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
return 0;
}