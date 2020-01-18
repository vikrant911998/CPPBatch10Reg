#include<iostream>
using namespace std;

class Student{
    int rollNo;
    int marks1;
    int marks2;
    int marks3;

    public:
        void input(){
            cout<<"Enter the Roll No"<<endl;
            cin>>rollNo;
            cout<<"Enter the Marks of Three subject"<<endl;
            cin>>marks1>>marks2>>marks3;
        }

        void output(){
            cout<<"Roll No = "<<rollNo<<endl;
            cout<<"Average = "<<(marks1+marks2+marks3)/3<<endl;
        }
};


int main(){
    Student list[2];
    Student obj;

    for(int i=0;i<2;i++){
        obj.input();
        list[i] = obj;
    }

    for(int i=0;i<2;i++){
        list[i].output();
    }


    return 0;
}