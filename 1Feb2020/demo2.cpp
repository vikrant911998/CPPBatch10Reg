//Static variables.

#include<iostream>
using namespace std;

class Demo{
    int id;
    string name;
    
    public:
        static int count;
        Demo(int id){ 
            this->id = id;
        }

        void display(){
            cout<<"Id = "<<this->id<<endl;
            cout<<"Static Variable = "<<count<<endl;
        }
};

int Demo::count = 150;


int main(){ 
    cout<<Demo::count<<endl;
    Demo obj(12),obj2(101);
    obj.display();
    obj2.display();

    return 0;
}