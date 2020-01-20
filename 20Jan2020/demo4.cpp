#include<iostream>
using namespace std;

class Shape{
    public:
        void f1(){
            cout<<"This is Shape"<<endl;
        }
};

class Rectangle : public Shape{
    public:
        void f2(){
            cout<<"This is Rectangular Shape"<<endl;
        }
};

class Circle : public Shape{
    public:
        void f3(){
            cout<<"This is Circular Shape"<<endl;
        }
};


class Square : public Rectangle{
    public:
        void f4(){
            cout<<"Square is Rectangle"<<endl;
        }
};

int main(){
    Square obj;
    obj.f1();
    obj.f2();

    return 0;
}