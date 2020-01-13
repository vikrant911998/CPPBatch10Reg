#include<iostream>
using namespace std;

class Student{
    private:
        int id;
        string name;
    public:
        //Constructors
        //Default Constructor
        Student(){
            cout<<"Default Constructor "<<endl;
            id = 0;
            name="";
        }


        //Parameterised Constructor
        Student(int i,string n){
            cout<<"Parameterised Constructor "<<endl;
            id = i;
            name = n;
        }

        void output(){
            cout<<"Id = "<<id<<" and Name = "<<name<<endl;
        }
};


int main(){
    Student obj(101,"Vikrant");
    obj.output();

    return 0;
}
