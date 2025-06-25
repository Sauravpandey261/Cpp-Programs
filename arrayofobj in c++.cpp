#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int rollno;
		string name;
		float marks;
		public:
		int getdata(){
				cout<<"Enter the name of ";
				cin>>name;
				cout<<"Enter the roll no.";
				cin>>rollno;
				cout<<"Enter the marks: ";
				cin>>marks;
			}
		int putdata(){
			cout<<"name is: "<<name<<endl;
			cout<<"rollno is: "<<rollno<<endl;
			cout<<"marks is: "<<marks<<endl;
	}
};
int main(){
	student obj[5];
	int i,n;
	cout<<"enter the no of students: ";
	cin>>n;
	for(i=0;i<n;i++){
		obj[i].getdata();
	}
	for(i=0;i<n;i++){
		obj[i].putdata();
	}
}










