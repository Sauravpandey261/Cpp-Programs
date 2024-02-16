#include<iostream>
#include<string>
using namespace std;
	class add{
		private:
			int a;
			int b;
		public:
			int sum(int a,int b){
			 cout<<"sum is "<<a+b;
			}
	};
int main(){
	int a,b;
	add s1;
	cin>>a;
	cin>>b;
	s1.sum(a,b);
	
}
