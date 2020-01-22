//Function Overriding in Multilevel Inheritance
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

class C : public B{
    public:
        //Again Overridden Show Function.
        void show(){
            cout<<"Show of Clas C"<<endl;
        }
};

int main(){
    B obj;
    obj.show();

    C obj1;
    obj1.show();


    return 0;
}