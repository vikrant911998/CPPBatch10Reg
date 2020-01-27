//Function Overloading.

#include<iostream>
using namespace std;

class Demo{
    public:

        void show(){
            cout<<"Show of Class Demo"<<endl;
        }

        void show(char a){
            cout<<"One char argument show function"<<endl;
        }

        void show(int a){
            cout<<"One Int argument Show Function"<<endl;
        }

        void show(string s){
            cout<<"One String argument show function"<<endl;
        }

        void show(int a,string s){
            cout<<"Two Int argument Show Function"<<endl;
        }

        void show(string s,int a){
            cout<<"One string and one int show function"<<endl;
        }

};


int main(){
    Demo obj;
    obj.show();
    obj.show(12);
    obj.show(12,"TOM");
    obj.show("Vikrant");
    obj.show('A');
    obj.show("TOM",12);

    return 0;
}