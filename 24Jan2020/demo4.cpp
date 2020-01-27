#include<iostream>
using namespace std;

//Abstract Class ->(at least one pure virtual function)
//Virtual function, Non-virtual Function, static Function


//class (only pure virtual function) -> Interface

class Bank{
    public:
        virtual void show() = 0;
};

int main(){
    Bank obj;

    return 0;
}