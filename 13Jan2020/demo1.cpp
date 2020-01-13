#include<iostream>
using namespace std;

class Student{

    private:
        //member variables, instance variables,data members,properties.
        int id;
        string name;

    public:

        // methods, member functions
        void input(int i,string n){
            
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
            cout<<"Id = $"<<id<<" and Name = "<<name<<endl;
        }

};



int main(){
    
    Student obj;
    int id;
    string name;
    // obj.id = -102;
    // obj.name = "%493867sfljd";

    cout<<"Enter the Id and Name"<<endl;
    cin>>id>>name;

    obj.input(id,name);
    obj.output();


    return 0;
}