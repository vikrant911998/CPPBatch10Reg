//Array of Objects

#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        void input(){
            cout<<"Enter the ID"<<endl;
            cin>>id;
            cout<<"Enter the Name"<<endl;
            cin>>name;

        }


        void output(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};


int main(){

    // int a[5];
    Student list[10];


    Student obj,obj1,obj2;

    obj.input();
    list[0] = obj;

    obj1.input();
    list[1] = obj1;

    obj2.input();
    list[2] = obj2;


    list[0].output();
    list[1].output();
    list[2].output();

    return 0;
}