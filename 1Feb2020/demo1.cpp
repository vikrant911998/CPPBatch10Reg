//Constructor Chaining in Hierarchical Inheritance
#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Default Constructor Of Parent Class"<<endl;
        }
        Parent(int data){
            cout<<"Param Constructor Of Parent Class"<<endl;
        }
};

class FirstChild : public Parent{
    public:
        FirstChild(){
            cout<<"Default Constructor of FirstChild"<<endl;
        }
        FirstChild(int data){
            cout<<"Param1 Constructor of FirstChild"<<endl;
        }
        FirstChild(int data1,string name) : Parent(data1) {
            cout<<"Param2 Constructor of FirstChild"<<endl;
        }
};

int main(){
    // FirstChild obj;
    // FirstChild obj(12);
    FirstChild obj(12,"Vikrant");


    return 0;
}
