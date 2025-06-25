#include<iostream>
using namespace std;
class reverse{
	private:
		int num,i,rev=0,r;
		public:
		int getdata(){
			cout<<"Enter the no: ";
			cin>>num;
		}
		int putdata(){
			while(num>=0){
				r=num%10;
				rev=r*10+rev;
				num=num/10;
			}
			cout<<rev;
			}
};
int main(){
	reverse obj;
		obj.getdata();
		obj.putdata();
}










