#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;

    public:
        Rectangle(){
            length = 0;
            breadth = 0;
        }

        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        Rectangle(int num){
            length = num;
            breadth = num;
        }

        void area(){
            cout<<"Area = "<<length*breadth<<endl;
        }

};

int main(){
    Rectangle obj,obj1(12),obj2(12,11);
    obj.area();
    obj1.area();
    obj2.area();

    return 0;
}