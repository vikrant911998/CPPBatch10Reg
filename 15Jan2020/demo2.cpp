#include<iostream>
using namespace std;

class AddAmount{

    int amount = 50;

    public:

        AddAmount(){
           
        }

        AddAmount(int a){
            amount = amount + a;
        }

        void finalAmount();
};

void AddAmount::finalAmount(){
    cout<<"Final Amount = "<<amount<<endl;
}


int main(){
    AddAmount obj1,obj2(10);

    obj1.finalAmount();
    obj2.finalAmount();

    return 0;
}