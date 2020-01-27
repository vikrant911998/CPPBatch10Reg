//Abstract Class -> Virtual Function -> Function Overriding.

#include<iostream>
using namespace std;

class Parent{
    public:
        void show(){
            cout<<"Show of Parent"<<endl;
        }
};


class Child : public Parent{
    public:
        void show(){
            cout<<"Show of Child"<<endl;
        }
};

int main(){
    
    Child obj;
    obj.show();  //Show of Child

    return 0;
}