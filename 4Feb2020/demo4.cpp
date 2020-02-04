//Templates in Class

#include<iostream>
using namespace std;

template<class T,class T1>

class Demo{
    T id;
    T1 name;
    public:
        Demo(T id,T1 name){
            this->id = id;
            this->name = name;
        }

        void show(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};

int main(){
    // Demo<int> obj(12);
    // obj.show();

    // Demo<double> obj(12.45543);
    // obj.show();

    // Demo<string> obj("Hello");
    // obj.show();

    // Demo<char> obj('#');
    // obj.show();

    Demo<long,string> obj(234567898765432123,"Vikrant");
    obj.show();


    return 0;
}