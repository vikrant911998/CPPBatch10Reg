//Inheritance Demo


#include<iostream>
using namespace std;

//Parent Class or Super Class
class Demo{
    public:

        int demoid;
        string demoname;
};


//Child Class or Sub Class
class First : public Demo{
    public:
        int firstid;
};


int main(){
    First obj;
    obj.demoid = 101;
    obj.demoname = "Vikrant";
    obj.firstid = 154395;

    cout<<obj.demoid<<endl;
    cout<<obj.demoname<<endl;
    cout<<obj.firstid<<endl;

    return 0;
}