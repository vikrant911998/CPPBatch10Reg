//Hierarchical Inheritance ->One Parent and Many Childs.

#include<iostream>
using namespace std;

class A{
    public:
        void show1(){
            cout<<"Show of Class A"<<endl;
        }
};

class B : public A{
    public:
        void show2(){
            cout<<"Show of Class B"<<endl;
        }
};

class C : public A{
    public:
        void show3(){
            cout<<"Show of Class C"<<endl;
        }
};


class D : public A{
    public:
        void show4(){
            cout<<"Show of Class D"<<endl;
        }
};

int main(){
    B obj1;
    C obj2;
    D obj3;

    obj1.show1();
    obj1.show2();
    cout<<endl;

    obj2.show1();
    obj2.show3();
    cout<<endl;

    obj3.show1();
    obj3.show4();

    return 0;
}