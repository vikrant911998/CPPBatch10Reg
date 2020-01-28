//Pure Virtual Function and Abstract Class
#include<iostream>
using namespace std;

class A{
    public:
        //Virtual Function
        virtual void show(){
            cout<<"Show of Class A"<<endl;
        }

        //Pure Virtual Function
        virtual void display() = 0;
};

class B : public A{
    public:
        void show(){
            cout<<"Show of Class B"<<endl;
        }

        void display(){
            cout<<"Display of Class B"<<endl;
        }
};



int main(){
    // A obj;
    B obj;
    obj.show();
    obj.display();

    return 0;
}