#include<iostream>
using namespace std;
class matrix{
	int i,j,k;
	int a[2][2],b[2][2],c[2][2];
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
	print(){
for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
		cout<<"multiplication matrix c is \n";
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

	
};
int main(){
	matrix mat;
	mat.readmatrix();
	mat.display();
	mat.print();
}
