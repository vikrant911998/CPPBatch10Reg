//Interface -> class with only pure virtual functions.
#include<iostream>
using namespace std;

class A{
    public:
        virtual void show() = 0;

        virtual void display() = 0;
};

class B : public A{
    public:
        void show(){

        }
        void display(){

        }
};

int main(){
    // A obj;
    B obj;

    
    return 0;
}