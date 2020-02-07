#include<iostream>
using namespace std;

class Student{
    int id;

    public:
        void input(){
            cout<<"Enter the Id"<<endl;
            cin>>id;
        }

        void output(){
            cout<<"Id = "<<id<<endl;
        }
};


int main(){
    Student obj;
    obj.input();
    obj.output();

    return 0;
}