//Function Overriding ->It is a concept when a child class defines the function which is already created inside the parent class.

#include<iostream>
using namespace std;

//parent class.
class A{
    public:
        void show(){
            cout<<"Show of Class A"<<endl;
        }
};


//Child class
class B : public A{
    public:
        //Overridden Show Function.
        void show(){
            cout<<"Show of Clas B"<<endl;
        }
};

int main(){
    B obj;
    obj.show();


    return 0;
}