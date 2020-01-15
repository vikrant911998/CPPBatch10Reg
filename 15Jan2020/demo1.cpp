#include<iostream>
using namespace std;

class Student{
    private:

        int id;
        string name;
    public:
        Student(){

        }

        Student(int i, string n){
            id = i;
            name = n;
        }

        //Function Declaration Inside the Class.
        void input();
};

class Employee{
    int id;
    string name;
    public:
        void input();
};



//Definition of input Function declared inside the Class Student.
void Student::input(){
    cout<<"Enter the ID"<<endl;
    cin>>id;
    cout<<"Enter the Name"<<endl;
    cin>>name;
}


void Employee::input(){
    cout<<"Input Function of Class Employee"<<endl;
}

void input(){
    cout<<"Normal Input Function"<<endl;
}



int main(){
    
    Employee obj1;
    Student obj;
    
    obj.input();
    obj1.input();

    input();
    
    return 0;
}