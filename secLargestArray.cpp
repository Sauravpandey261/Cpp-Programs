#include<iostream>
using namespace std;

void seclargestElement(int arr[],int n){
    int largest=arr[0];
    int secLargest=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest&& arr[i]>secLargest){
            secLargest=arr[i];
        }
    }
    cout<<"Second Largest Value is: "<<secLargest<<endl;
}

int main()
{
    int arr[5]={2,5,6,3,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    seclargestElement(arr,size);
    return 0;
}