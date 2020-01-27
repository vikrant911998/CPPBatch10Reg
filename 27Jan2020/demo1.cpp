//Function Overriding -> Child Overwrite the parent function.

#include<iostream>
using namespace std;

class Parent{
    public:
        void show(){
            cout<<"Show of Parent Class"<<endl;
        }
};


class Child : public Parent{
    public:
        int show(int a){
            cout<<"Show of Child Class"<<endl;
            return a;
        }
};


int main(){
    Child obj;
    // obj.show();
    obj.show(23);

    return 0;
}