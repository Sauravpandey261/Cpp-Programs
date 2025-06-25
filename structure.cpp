//#include<iostream>
//using namespace std;
//struct employee{
//	int eId;
//	char favChar;
//	float salary;
//};
//int main(){
//	struct employee saurav;
//	saurav.eId=1;
//	saurav.favChar='c';
//	saurav.salary=100000.2;
//	cout<<saurav.eId<<endl;
//	cout<<saurav.favChar<<endl;
//	cout<<saurav.salary<<endl;
//}
#include<iostream>
using namespace std;
typedef struct employee{
	int eId;
	char favChar;
	float salary;
}ep;
int main(){
	ep saurav;
	saurav.eId=1;
	saurav.favChar='c';
	saurav.salary=100000.2;
	cout<<saurav.eId<<endl;
	cout<<saurav.favChar<<endl;
	cout<<saurav.salary<<endl;
}



