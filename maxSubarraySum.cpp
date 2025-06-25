#include<iostream>
using namespace std;


void maxSubarraySum1(int *arr,int n){                   //Brute Force approach
    int maxSum=INT8_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxSum=max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum1 = "<<maxSum<<endl;
}
void maxSubarraySum2(int *arr,int n){                   //Optimization approach
    int maxSum=INT8_MIN;
    for(int start=0;start<n;start++){
        int currSum=0;                                    
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxSum=max(maxSum,currSum);
        }
    }
    cout<<"maximum subarray sum2 = "<<maxSum<<endl;
}
void maxSubarraySum3(int *arr,int n){                   //Kadane's algorithm
    int maxSum=INT8_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum= max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"maximum subarray sum3 = "<<maxSum<<endl;
}
int main()
{
    int arr[]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxSubarraySum1(arr,n);
    maxSubarraySum2(arr,n);
    maxSubarraySum3(arr,n);


  
    return 0;

}