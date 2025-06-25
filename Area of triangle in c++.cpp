#include<iostream>
#include<math.h>
using namespace std;
class area{
	int s1,s2,s3;
	double S,A;
	public :
		void getdata(){
			cout<<"Enter the first side ";
			cin>>s1;
			cout<<"Enter the second side ";
			cin>>s2;
			cout<<"Enter the third side ";
			cin>>s3;
		}
		void showdata(){
			S=(s1+s2+s3)/2.0;
			cout<<"Semi parameter is "<<S<<endl;
			A=pow(S*(S-s1)*(S-s2)*(S-s3),0.5);
			cout<<"Area is "<<A;
		}
		
		
};
int main(){
	area aa;
	aa.getdata();
	aa.showdata();
}
