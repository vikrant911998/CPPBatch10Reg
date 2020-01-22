#include<iostream>
using namespace std;

//Parent
class Degree{
    public:
        void getDegree(){
            cout<<"I got a degree"<<endl;
        }
};


//Child of Degree
class Undergraduate : public Degree{
    public:
        //Function Overriding
        void getDegree(){
            cout<<"I am a Undergraduate"<<endl;
        }
};


//Child of Degree
class Postgraduate : public Degree{
    public:
        //Function Overriding
        void getDegree(){
            cout<<"I am a Postgraduate"<<endl;
        }
};


int main(){
    Degree obj1;
    Undergraduate obj2;
    Postgraduate obj3;

    obj1.getDegree();
    obj2.getDegree();
    obj3.getDegree();



    return 0;
}