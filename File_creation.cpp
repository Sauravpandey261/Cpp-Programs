#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream onFile;
	onFile.open("C:\\Users\\saura\\OneDrive\\Desktop\\file1.cpp");
	cout<<"File Created Successfully";
	onFile<<"#include<iostream>#include<fstream>using namespace std;main(){ofstream onFile;onFile.open("C:\\Users\\saura\\OneDrive\\Desktop\\file1.cpp");cout<<"File Created Successfully";onFile<<"Thank U so Much: ";//TO write	onFile.close();}";
	onFile.close();
}
