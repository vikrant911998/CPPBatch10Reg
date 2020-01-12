#include<iostream>
using namespace std;

class Student{

    //Data Hiding
    private:
        int id;
        string name;
    public:

        void input(int i, string n){
            while(true){
                if(i > 0){
                    id = i;
                    break;
                }  
                else{
                    cout<<"Invalid ID FOund"<<endl;
                    cout<<"Enter the Valid ID"<<endl;
                    cin>>i;
                    // exit(0);
                }
            }
                // id = -1*(i);
            name = n;
        }

        void output(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};

int main(){
    Student obj;
    int id;
    string name;

    cout<<"Enter the Id and Enter the Name";
    cin>>id>>name;

    obj.input(id,name);
    
    // obj.id = -234;
    // obj.name = "_@3567654";

    cout<<endl;
    obj.output();
   


    return 0;
}



