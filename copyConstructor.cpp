#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    string color;
    Car(string name,string color){
        cout<<"hello"<<endl;
        this->name=name;
        this->color=color;
    }

    Car( Car &original){
        cout<<"copying.."<<endl;
        name=original.name;
        color=original.color;
    }

};
int main()
{
    Car c1("maruti 800","White");

    Car c2(c1);                     // c2 is copy of c1
    cout<<"name: "<<c2.name<<endl;
    cout<<"color: "<<c2.color<<endl;


    return 0;
}