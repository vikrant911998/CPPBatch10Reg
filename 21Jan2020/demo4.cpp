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
        B(){
            cout<<"Default Constructor of Class B"<<endl;
        }
        
};

class C : public A{
    public:
        C(){
            cout<<"Default Constructor of Class C"<<endl;
        }
};

int main(){
    C obj;
    B obj1;

    return 0;
}