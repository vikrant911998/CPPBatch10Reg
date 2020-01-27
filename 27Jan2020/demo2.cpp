//Function Overriding -> Child Overwrite the parent function.

#include<iostream>
using namespace std;

class Parent1{
    public:
        void show(){
            cout<<"Show of Parent1 Class"<<endl;
        }
};

class Parent2{
    public:
        void show(){
            cout<<"Show of Parent2 Class"<<endl;
        }
};


class Child : public Parent1,public Parent2{
    public:
        //Function Override
        int show(int a){
            cout<<"Show of Child Class"<<endl;
            return a;
        }

        void show(){
            cout<<"Function Overloading"<<endl;
        }

        void display(){
            
        }
};


int main(){
    Child obj;
    obj.show();
    obj.show(23);

    return 0;
}