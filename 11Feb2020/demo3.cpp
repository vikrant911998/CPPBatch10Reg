#include<iostream>
using namespace std;

class Marks{
    int eng;
    int hindi;
    public:
        void setValue(int eng,int hindi){
            this->eng = eng;
            this->hindi = hindi;
        }

        void show(){
            cout<<"English Marks = "<<eng<<endl;
            cout<<"Hindi Marks = "<<hindi<<endl;
        }
};

class Student{
    int id;
    string name;
    Marks obj;

    public:
        Student(int id,string name,int eng,int hindi){
            this->id = id;
            this->name = name;
            obj.setValue(eng,hindi);
        }

        void display(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            obj.show();
        }

};

int main(){
    Student s(101,"Vikrant",43,56);
    s.display();

    return 0;
}