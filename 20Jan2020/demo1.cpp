//Multilevel Inheritance->parent->Child(Parent) -> Child.

#include<iostream>
using namespace std;


//1st Parent
class A{
    public:
        void show1(){
            cout<<"Show of Class A"<<endl;
        }
};

//2nd Parent and 1st Child
class B : public A{
    public:
        void show2(){
            cout<<"Show of Class B"<<endl;
        }
};


//2nd Child
class C : public B{
    public:
        void show3(){
            cout<<"Show of Class C"<<endl;
        }
};

int main(){
    B obj;
    obj.show1();
    obj.show2();

    cout<<endl;

    C obj1;
    obj1.show1();
    obj1.show2();
    obj1.show3();

    return 0;
}