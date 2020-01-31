//Constructor Chaining in Mutlilevel Inheritance

#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Default Constructor of Class Parent"<<endl;
        }

        Parent(int data){
            cout<<"Param Constructor of Class Parent"<<endl;
        }
};

class Child1 : Parent{
    public:
        Child1() : Parent(){
            cout<<"Default Constructor of Class Child1"<<endl;
        }

        Child1(int data) : Parent() {
            cout<<"Param Constructor of Class Child1"<<endl;
        }
};


class Child2 : public Child1{
    public:
        Child2() : Child1() {
            cout<<"Default Constructor of Class Child2"<<endl;
        }

        Child2(int data) : Child1(data) {
            cout<<"Param Constructor of Class Child2"<<endl;
        }
};


int main(){

    // Child2 obj;
    Child2 obj(2);

    return 0;
}