#include<iostream>
using namespace std;
class matrix{
	int i,j;
	int a[2][2],b[2][2];
	public:
		readmatrix(){
			cout<<"a matrix is :"<<endl;
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					cout<<"Enter the element of arr "<< i << j <<" = ";
					cin>>a[i][j];
				}
			}
			cout<<"b matrix is :"<<endl;
				for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					cout<<"Enter the element of arr "<< i << j <<" = ";
					cin>>b[i][j];
				}
			}
		}	
			display(){
				cout<<"element of matrix a "<<endl;
				for(i=0;i<2;i++){
				for(j=0;j<2;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"element of matrix b "<<endl;
		for(i=0;i<2;i++){
				for(j=0;j<2;j++){
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
}

}
};
int main(){
	matrix mat;
	mat.readmatrix();
	mat.display();
}
