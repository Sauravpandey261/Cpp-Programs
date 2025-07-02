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
class Fish:public Animal{
    public:
    int fins;
    void swim(){
        cout<<"Swims"<<endl;
    }

};

int main()
{
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.eat();
    f1.swim();
    return 0;
}