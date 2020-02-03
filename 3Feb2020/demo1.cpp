#include<iostream>
using namespace std;


class Demo{
        int id;
    public:

        Demo(int id){
            this->id = id;
        }

        void show(){
            cout<<id<<endl;
        }
};

int main(){
    Demo obj(10);
    obj.id = 10234;


    return 0;
}