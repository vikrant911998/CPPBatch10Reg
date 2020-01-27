//Abstract Class -> Virtual Function -> Function Overriding.

#include<iostream>
using namespace std;

class Parent{
    public:
        // pure virtual Function
        // virtual void play() = 0;

        //Virtual Function
        virtual void show(){
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
    
    // Parent obj;
    // obj.show(); //will Call only Parent Show Not Child's Show

    Child obj;
    obj.show();

    Parent *ptr; 

    ptr = &obj;

    ptr->show();

    return 0;
}