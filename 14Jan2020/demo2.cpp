#include<iostream>
using namespace std;

class Student{
    string name;

    public:
        Student(){
            name="Unknown";
        }

        Student(string n){
            name = n;
        }

        void output(){
            cout<<"Name = "<<name<<endl;
        }
};

int main(){
    Student obj,obj1("Vikrant");
    obj.output();
    obj1.output();

    return 0;
}