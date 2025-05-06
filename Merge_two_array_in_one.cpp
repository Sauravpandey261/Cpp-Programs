#include<iostream>

using namespace std;

void merge(int arr1[],int n,int arr2[],int m){
  int i = n - m - 1;  // Pointer for the last valid element in arr1
    int j = m - 1;      // Pointer for the last element in arr2
    int k = n - 1;      // Pointer for the last position in arr1 (to place merged elements)

    // Merge the arrays starting from the back
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }
 	while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}
void print(int ans[],int n){
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	int arr1[6]={5,8,11,0,0,0};
	int arr2[3]={2,5,6};
	
	merge(arr1,6,arr2,3);
	
	print(arr1,6);
		
	return 0;
}
