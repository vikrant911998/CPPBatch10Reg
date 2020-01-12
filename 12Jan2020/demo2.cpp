#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;

        void input(int i, string n){
            id = i;
            name = n;
        }

        void output(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};

int main(){
    Student obj,obj1;
    
    obj.input(101,"Ram");
    obj.output();

    obj1.input(102,"Vikas");
    obj1.output();
    

    return 0;
}



