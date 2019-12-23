#include<iostream>
using namespace std;


int main(){ 
    //variable declaration.
    int a;

    //variable declaration and initialization.
    // int b = 10;


    cout<<"Enter a Number "<<endl;
    cin>>a;

    if(a%2 == 0){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }

    return 0;
}