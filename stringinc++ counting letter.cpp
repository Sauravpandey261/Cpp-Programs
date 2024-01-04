#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,count=0;
	char c='m';
	string str="hello i am doing c programming";
	for(i=0;i<=strlen(str);i++){
		if(str[i]==c){
			count++;
		}
	}
	cout<<count;
}
