//No return type and with Arguments
#include<iostream>
using namespace std;

//function declaration
void checkNumber(int);


int main(){
    int num;

    cout<<"Enter a Number"<<endl;
    cin>>num;

    //calling
    checkNumber(num);

    return 0;
}


//function definition
void checkNumber(int a){ //int a ->parameters
    if(a%2 == 0)
        cout<<"Even Number"<<endl;
    else
        cout<<"Odd Number"<<endl;

}