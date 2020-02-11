#include<iostream>
using namespace std;

class Employee{
    int id;

    public:
        Employee(int id){
            this->id = id;
        }

        void show(){
            cout<<"Id = "<<id<<endl;
        }
};