#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;

    public:
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }
        
        void area(){
            cout<<"Area = "<<length*breadth<<endl;
        }

        void perimeter(){
            cout<<"Perimeter = "<<2*(length+breadth)<<endl;
        }
};