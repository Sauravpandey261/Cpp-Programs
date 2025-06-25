#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=1;i<=10;i++){
		if(i==4){
			continue;
		}
		else{
			cout<<i<<endl;
		}
	}
}
