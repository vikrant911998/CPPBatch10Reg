#include<iostream>
using namespace std;

class Parent{
    protected:
        int id;
        string name;
    public:
        Parent(int id ,string name){
           this->id = id;
           this->name = name; 
        }
};

class Child : public Parent{
    string address;
    public:
        Child(int id,string name,string address) : Parent(id,name){
            this->address = address;
        }

        void display(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Address = "<<address<<endl;
        }
};


int main(){
    Child obj(101,"Vikrant","Rohini");

    obj.display();

    return 0;
}