//Constructor Chaining in Multiple Inheritance

#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Default Constructor of Class A"<<endl;
        }
        A(int a){
            cout<<"Param Constructor of Class A"<<endl;
        }
};

class B{
    public:
        B(){
            cout<<"Default Constructor of Class B"<<endl;
        }

        B(int a){
            cout<<"Parameterised Constructor of Class B"<<endl;
        }
};


class C: public B, public A{
    public:
        C():B(23),A(23){
            cout<<"Default Constructor of Class C"<<endl;
        }
};

int main(){
    C obj;

    return 0;
}

