#include<iostream>
using namespace std;

class Student{
    private:
        int id;
        string name;

    public:
        void input(){
            int i;
            string n;

            cout<<"Enter the Id and Name"<<endl;
            cin>>i>>n;

            while(true){
                if(i>0){
                    id = i;
                    break;
                }
                else{
                    cout<<"Invalid ID Found"<<endl;
                    cout<<"Enter the ID Again"<<endl;
                    cin>>i;
                }
            }

            name = n;
        }

        void output(){
            cout<<"ID = "<<id<<" and Name = "<<name<<endl;
        }
};


int main(){
    Student obj;
    obj.input();
    obj.output();

    return 0;
}