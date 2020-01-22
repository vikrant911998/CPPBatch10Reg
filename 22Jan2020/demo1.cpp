//Multilevel Constructor Chaining.

#include<iostream>
using namespace std;


class A{
    public:
        A(){
            cout<<"Default constructor of Class A"<<endl;
        }

        A(int a){
            cout<<"Param Constructor of Class A"<<endl;
        }
};

class B:public A{
    public:
        B():A(){
           cout<<"Default Constructor of Class B"<<endl; 
        }

        B(int a):A(a){
            cout<<"Param Constructor of Class B"<<endl;
        }
};

class C : public B{
    public:
        C():B(23){
            cout<<"Default Constructor of Class C"<<endl;
        }
};



int main(){
    C obj;

    return 0;
}