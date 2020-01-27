#include<iostream>
using namespace std;

class Student{
    int id;
    string name;

    public:
        Student(){

        }
        
        Student(int id, string name){
            this->id = id;
            this->name = name;
        }
        
        // void input(){

        // }

        void input();
        void output();
};

void Student::input(){
    cout<<"Enter the Id and Name"<<endl;
    cin>>id>>name;
}

void Student::output(){
    cout<<"Id = "<<id<<" and Name = "<<name<<endl;
}


int main(){
    int id;
    string name;
    cout<<"Enter the Id and Name"<<endl;
    cin>>id>>name;

    Student obj,obj1(id,name);
    obj.input();

    obj.output();
    obj1.output();




    return 0;
}