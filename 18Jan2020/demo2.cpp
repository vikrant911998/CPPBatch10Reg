//Array of Objects

#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        void input(){
            cout<<"Enter the ID"<<endl;
            cin>>id;
            cout<<"Enter the Name"<<endl;
            cin>>name;

        }
        void output(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};


int main(){
    Student obj;

    int number;

    cout<<"Enter the Total Number of Students (Should be less than 10)"<<endl;
    cin>>number; //20

    //Creating an array of Student type of size (number).
    Student list[ number ];// ->Student list[20];

    for(int i=0;i<number;i++){
        obj.input();
        list[i] = obj;
    }


    for(int i=0;i<number;i++){
        list[i].output();
    }


    return 0;
}