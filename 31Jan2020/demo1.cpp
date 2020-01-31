//Function Overriding in Hierarchical Inheritance
#include<iostream>
using namespace std;

//Parent Class
class Parent{
    public:
        void show(){
            cout<<"Show of Parent Class"<<endl;
        }
};


//First Child
class FirstChild : public Parent{
    public:
        void show(){
            cout<<"Show of First Child "<<endl;
        }
};


//Second Child
class SecondChild : public Parent{
    public:
        void show(){
            cout<<"Show of Second Child "<<endl;
        }
};


//Third Child
class ThirdChild : public Parent{
    public:
        void show(){
            cout<<"Show of Third Child "<<endl;
        }
};


int main(){
    Parent obj;
    FirstChild obj1;
    SecondChild obj2;
    ThirdChild obj3;

    obj.show();
    obj1.show();    
    obj2.show();
    obj3.show();


    return 0;
}