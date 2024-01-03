#include<iostream>
using namespace std;
class sumation{
	private:int sum=0,i ;
	public:
		void getdata(){
			for(i=1;i<=100;i++){
				if(i%2!=0){
					sum=sum+i;
				}
			}
			cout<<sum;
		}
		
};
int main(){
	sumation s;
	s.getdata();
}
