#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;
    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;
        *mileage=12;
    }
    Car(Car &original){
        cout<<"Copying original to new"<<endl;
        name=original.name;
        color=original.color;
         mileage=new int;                               // Deep copy 
        *mileage=*original.mileage;
    }

};

int main()
{
    Car c1("Maruti 800","white");
    Car c2(c1);

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;

    cout<<*c2.mileage<<endl;
    *c2.mileage=10;
    cout<<*c1.mileage<<endl;                // c2 mei hmne 12 ko change krke 10 kri value pr vo c1 mei reflect nhi hoi ise hi deep copy khenge
    cout<<*c2.mileage<<endl;

    return 0;
}