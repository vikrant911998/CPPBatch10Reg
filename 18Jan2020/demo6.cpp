//Inheritance Types
// 1.Single Inheritance
// 2.Multiple Inheritance
// 3.Multi Level Inheritance
// 4.Hierarchical Inheritance

// SINGLE INHERITANCE

#include<iostream>
using namespace std;

//Parent Class or Super Class
class A{
    public:
        void show(){
            cout<<"Show of Class A"<<endl;
        }
};


//Child Class or Sub Class
class B : public A{
    public:
        void play(){
            cout<<"Play of Class B"<<endl;
        }
};

int main(){
    B obj;
    obj.show();
    obj.play();

    return 0;
}