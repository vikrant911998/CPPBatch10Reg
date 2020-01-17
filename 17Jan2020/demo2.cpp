#include<iostream>
using namespace std;

class Student{
    private:
        int id;
        string name;
    public:
        Student(int id,string name){ //parameter constructor 
            this->id = id;
            this->name = name;
        }

        // void input(int id,string name){
        //     this->id = id;
        //     this->name = name;
        // }

        void display();
};

void Student::display(){
    cout<<"Id = "<<this->id<<endl;
    cout<<"Name = "<<this->name<<endl;
}


int main(){
    Student obj(101,"Vikrant");
    obj.display();

    return 0;
}