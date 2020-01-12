#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;

};

int main(){
    Student obj,obj1;

    obj.id = 101;
    obj.name = "Ram";

    obj1.id = 102;
    obj1.name = "Vikas";

    cout<<"ID = "<<obj.id<<endl;
    cout<<"Name = "<<obj.name<<endl;

    cout<<"ID = "<<obj1.id<<endl;
    cout<<"Name = "<<obj1.name<<endl;

    return 0;
}







//syntax
// class_Keyword class_Name{

// } ;