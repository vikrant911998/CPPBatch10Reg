#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;

    public:
        
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }
        
        void rarea(){
            cout<<"Area = "<<length*breadth<<endl;
        }

        void rperimeter(){
            cout<<"Perimeter = "<<2*(length+breadth)<<endl;
        }
};

class Square : public Rectangle{
    int side;
    public:
        Square(int side):Rectangle(side,side){
            this->side = side;
            cout<<"Parameter Constructor of Class Square"<<endl;
        }

        void sarea(){
            cout<<"Sqaure Area = "<<side*side<<endl;
        }

        void sperimeter(){
            cout<<"Square Perimeter = "<<4*side<<endl;
        }
};

int main(){
    Rectangle obj1(10,12);
    Square obj(12);
    obj1.rarea();
    obj1.rperimeter();

    obj.sarea();
    obj.sperimeter();

    return 0;
}