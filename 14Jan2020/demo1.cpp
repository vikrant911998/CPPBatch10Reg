//Constructor Overloading -> Situation in which class have more than one constructor.

//1. Different Number Of Parameters.
//2. Different Type of Parameter.
//3. Different Sequence of Parameter.


#include<iostream>
using namespace std;

class Student{
    int id;
    string name;

    public:
        Student(){  // Zero Parameter
            cout<<"Default Constructor"<<endl;
        }

        Student(int i){ // One Parameter ->Type->int
            id = i;
            cout<<"Int Id Parameter Constructor"<<endl;
        }

        Student(double i){  //One Parameter ->Type->double
            id = i;
            cout<<"Double Id Parameter Constructor"<<endl;
        }

        Student(int i,string n){ //Two Parameter
            id = i;
            name = n;

            cout<<"Int String parameter constructor"<<endl;
        }

        Student(string n, int i){ //Two Parameter(Different Sequence)
            id = i;
            name = n;
            cout<<"String Int parameter constructor"<<endl;
        }

};


int main(){
    // Student obj;
    // Student obj(12);
    // Student obj(1234.345);
    // Student obj(12,"ram");
    Student obj("ram",244);

    return 0;
}