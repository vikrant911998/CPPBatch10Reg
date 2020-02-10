//Function Overloading

#include<iostream>
using namespace std;

class Customer{
    int id;
    string name;
    string address;
    int age;
    public:
        void input(int id, int age){
            this->id = id;
            this->age = age;
        }
        void input(string address, string name){
            this->address = address;
            this->name = name;
        }
        void input(int id,string name, string address,int age){
            this->address = address;
            this->name = name;
            this->id = id;
            this->age = age;
        }

        void show(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Address = "<<address<<endl;
            cout<<"Age = "<<age<<endl;
        }
};

int main(){
    Customer obj,obj1;
    obj.input(101,"Vikrant","Rohini",23);
    obj1.input(103,23);
    obj1.input("Pitampura","Vikas");

    obj.show();
    obj1.show();

    return 0;
}