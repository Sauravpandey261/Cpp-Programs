#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,4,5,5,6};
    int i,j
    int n=10;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                arr[i+1]=arr[j+1];
            }
        }
    }

    for(i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}
