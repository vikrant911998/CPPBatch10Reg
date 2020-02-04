//Interface and inheritance

#include<iostream>
using namespace std;

class Bank{
    public:

        virtual void create() = 0;
        virtual void update() = 0;
        virtual void deleteRecord() = 0;
};

class HDFC : Bank{
    public:
        void create(){
            cout<<"Create of HDFC"<<endl;
        }
        void update(){
            cout<<"Update of HDFC"<<endl;
        }
        void deleteRecord(){
            cout<<"Delete of HDFC"<<endl;
        }

};

int main(){
    HDFC obj;
    obj.create();
    obj.deleteRecord();
    obj.update();

    return 0;
}