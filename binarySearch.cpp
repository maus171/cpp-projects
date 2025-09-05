#include<iostream>
#include <iomanip>

using namespace std;
int binaerysearch(int arr[], int n,int key){
    int start=0,end=n-1;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(key==arr[mid])
           return mid;
        else if(key>arr[mid])
            start=mid+1;
        else
            end=mid-1;

    }
    return -1;
}
int main() {
    int arr[]={1,2,3,4,5};
    cout<<"Original array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    
    int index=binaerysearch(arr,5,3);
    if(index==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index: "<<index<<endl;
}