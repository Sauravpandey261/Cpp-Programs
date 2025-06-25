#include<iostream>
using namespace std;
class Hero{
	private:
		int health;
	public:
		char level;
	
	Hero(){
		cout<<"\nConstructor called"<<endl;
	}
	
	Hero(int health){
		cout<<"this-> "<<this;
		this->health=health;
	}
	char getlevel(){
		return level;
	}
	int gethealth(int h){
		health=h;
		return health;
	}
	
		
};
int main(){
	//Hero ramesh; Default Constructor called
	Hero ramesh(10); //Parameterised Constructor called
	ramesh.level='A';
	cout<<"\nLevel of ramesh is :"<<ramesh.getlevel()<<endl;
	cout<<"Ramesh health is :"<<ramesh.gethealth(70)<<endl;
	
	cout<<"Address of Ramesh is :"<<&ramesh<<endl;
	
	//Dynamically
//	Hero *h = new Hero(11);

	
	Hero *b=new Hero;
	(*b).level='B';
	cout<<"Level is "<<(*b).level<<endl;
	cout<<"Health is "<<(*b).gethealth(45)<<endl;
	
	cout<<"Level is "<<b->level<<endl;
	cout<<"Health is "<<b->gethealth(45)<<endl;
	
	
	
}
