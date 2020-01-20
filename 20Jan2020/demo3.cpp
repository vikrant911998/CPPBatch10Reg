//Multiple Inheritance -> Many Parents and One Child.

#include<iostream>
using namespace std;

class A{
    public:
        void show1(){
            cout<<"Show of Class A"<<endl;
        }
};

class B{
    public:
        void show2(){
            cout<<"Show of Class B"<<endl;
        }
};


class C{
    public:
        void show3(){
            cout<<"Show of Class C"<<endl;
        }
};


class D : public A, public B,public C{
    public:
        void show4(){
            cout<<"Show of Class D"<<endl;
        }
};


int main(){
    D obj;
    
    obj.show1();
    obj.show2();
    obj.show3();
    obj.show4();

    return 0;
}