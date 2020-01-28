//Virtual Function and Overriding

#include<iostream>
using namespace std;

class A{
    public:
        virtual void show(){
            cout<<"Show of Class A"<<endl;
        }
};


class B : public A{
    public:
        //Function Overridding
        void show(){
            cout<<"Show of Class B"<<endl;
        }
};


int main(){ 
    B obj;

    obj.show(); //Show of Child

    A *ptr;
    ptr = &obj;

    ptr->show(); //Show of Child


    return 0;
}