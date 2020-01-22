//Constructor Chaining in Single Inheritance

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

class B : public A{
    public:
        B():A(){
            cout<<"Default Constructor of Class B"<<endl;
        }

        B(int a):A(a){
            cout<<"Parameterised Constructor of Class B"<<endl;
        }
};

int main(){
    B obj(12);

    return 0;
}

