#include<iostream>

using namespace std;

int main(){
	int array[]={3,5,1,4,6,2},i;
	int done=0;
	while(done==0){
		done=1;
		for(i=0;i<=4;i++){
			if(array[i]<array[i+1]){
				swap(array[i],array[i+1]);
				for(i=0;i<=5;i++){
					cout<<array[i];
				}
				done=0;
			}
		}
		cout<<endl;
			for(i=5;i>=1;i--){
				if(array[i]>array[i-1]){
					swap(array[i],array[i-1]);
						for(i=0;i<=5;i++){
					cout<<array[i];
				}
				cout<<endl;
					done=0;
					
				}
			}
	}
	cout<<array[3]<<endl;
	for(i=0;i<=5;i++){
		cout<<array[i];
	}
}
