#include<iostream>
using namespace std;

namespace Demo{
    //variable inside Demo Namespace
    int a = 34;

    //function inside Demo Namespace
    void show(){
        cout<<"Show of Demo Namespace"<<endl;
    }

    class Student{
        int id;
        public:
            Student(int id){
                this->id = id;
            }
            void show(){
                cout<<"Id = "<<id<<endl;
            }
    };
}

namespace Demo1{

    void show(){
        cout<<"Show of Demo1 Namespace"<<endl;
    }

    class Student{
        int id;
        public:
            Student(int id){
                this->id = id;
            }
            void show(){
                cout<<"DEMO1 Id = "<<id<<endl;
            }
    };

}



int main(){

    Demo::show();
    Demo1::show();

    Demo::Student obj(101);
    obj.show();

    Demo1::Student obj1(102);
    obj1.show();

    return 0;
}