#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name;
        string address;
    public:
        void input(){
            cout<<"Enter the Id, Name,Address"<<endl;
            cin>>id>>name>>address;
        }

        void output(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Address = "<<address<<endl;
        }
};


int main(){
    Employee obj;
    obj.input();
    obj.output();

    return 0;
}