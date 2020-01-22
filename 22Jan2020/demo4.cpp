//Function Overriding in Multiple Inheritance

#include<iostream>
using namespace std;

//Parent 1
class A{
    public:
        void show1(){
            cout<<"Show 1 of Class A"<<endl;
        }
};


//Parent 2
class B {
    public:
        void show2(){
            cout<<"Show 2 of Clas B"<<endl;
        }
};


//Child of A and B
class C : public A,public B{
    public:
        //Overridden Show Function.
        void show1(){
            cout<<"Show 1 of Clas C"<<endl;
        }

        void show2(){
            cout<<"Show 2 of Clas C"<<endl;
        }
};

int main(){
   

    C obj;
    obj.show1();
    obj.show2();


    return 0;
}