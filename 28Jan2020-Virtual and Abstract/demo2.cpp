#include<iostream>
using namespace std;

//Parent Class, Super Class, Base Class.
class A{
    public:
        void show(){
            cout<<"Show of Class A"<<endl;
        }
};

//Child Class, Sub Class, Derived Class.
class B : public A{
    public:
        void display(){
            cout<<"Display of Class B"<<endl;
        }
};



int main(){
    A obj1;
    B obj2;

    A *ptr1;
    B *ptr2;

    ptr1 = &obj2; //(Parent to Child)
    // ptr2 = &obj1;
    


    return 0;
}