#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,15,20,25,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    while(end>start){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reverse of Array is :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}