#include<iostream>
#include<string>
using namespace std;
int main(){
	struct stu{
		int rollno;
		string name;
		float marks;
	} stu1,stu2;
	stu1.rollno=1;
	stu1.name="saurav";
	stu1.marks=89.86;
	cout<<"student name is "<<stu1.name <<"roll no is "<<stu1.rollno<<"marks is "<<stu1.marks;
}
