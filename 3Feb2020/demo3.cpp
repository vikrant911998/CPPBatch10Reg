//Static Function

#include<iostream>
using namespace std;


class Demo{
    int id; //non-static(object)
    static int count; //static(class)

    public:
        Demo(int id){
            this->id = id;
            
        }

        //Non-Static Function
        void show(){
            cout<<"Inside Show Function"<<endl;
            cout<<"Id = "<<this->id<<endl;
            cout<<"Count = "<<count<<endl;
            cout<<endl;
        }

        //Static Function
        static void display(){
            cout<<"Inside Display Function"<<endl;
            cout<<"Count = "<<count<<endl;
            // cout<<"Id = "<<id<<endl; // -> Error due to non static.
        }     

};

int Demo::count = 10;

int main(){
    Demo obj(12421);
    obj.show();

    Demo::display();

    return 0;
}