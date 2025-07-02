#include<iostream>
using namespace std;

class Animal{
    public: 
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathes\n";
    }
};
class Mammal:public Animal{
    public:
    void giveBirth(){
        cout<<"give birth"<<endl;
    }
};

class Dog: public Mammal{
    public:
    void tailWag(){
        cout<<"Dog wags the tail"<<endl;
    }
};

int main()
{
   Dog d1;
   d1.breathe();
   d1.giveBirth();
   d1.tailWag();
    return 0;
}