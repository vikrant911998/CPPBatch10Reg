//Function Overriding in Multiple Inheritance

#include<iostream>
using namespace std;

//Parent 1
class A{
    public:
        void show(){
            cout<<"Show of Class A"<<endl;
        }
};


//Parent 2
class B {
    public:
        void show(){
            cout<<"Show  of Clas B"<<endl;
        }
};


//Child of A and B
class C : public A,public B{
    public:
        //Overridden Show Function.
        void show(){
            cout<<"Show  of Clas C"<<endl;
        }

        
};

int main(){

    C obj;
    obj.show();


    return 0;
}