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
    int id;
    string name;

    cout<<"Enter the Id and Enter the Name";
    cin>>id>>name;

    obj.input(id,name);
    

    cout<<"Enter the Id and Enter the Name";
    cin>>id>>name;

    obj1.input(id,name);

    cout<<endl;
    obj.output();
    obj1.output();


    return 0;
}



