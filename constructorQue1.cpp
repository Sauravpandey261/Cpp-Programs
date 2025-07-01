#include<iostream>
using namespace std;

class User{
    int id;
    string password;

    public:
        string name;
        User(int id){
            this->id=id;
            cout<<"Id is :"<<id<<endl;
        }
        void setPass(string password){
            this->password=password;
        }
        string getPass(){
            return password;
        }
};

int main()
{
    User u1(120);
    u1.name="Saurav";

    cout<<u1.name<<endl;
    u1.setPass("abcd1234");
    cout<<"Password is :"<<u1.getPass()<<endl;
    return 0;
}