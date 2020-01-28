//Object and Pointer
//Parent class pointer can hold the address of child class object.


#include<iostream>
using namespace std;

class A{
    public:
        void show(){
            cout<<"Show of Class A"<<endl;
        }
};

int main(){
    A obj;
    obj.show();

    A *ptr = &obj;
    ptr->show();


    return 0;
}
