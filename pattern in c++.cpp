#include<iostream>
using namespace std;
int main(){
	int i,j,rows,count=1;
	cout<<"enter the rows :";
	cin>>rows;
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			cout<<count;
			count++;
			cout<<"\t";
			
		}
		cout<<endl;
	}
}
