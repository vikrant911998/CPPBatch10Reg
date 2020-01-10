//4.With return type and no argument.

#include<iostream>
using namespace std;

//function declaration
int square();


int main(){
    int result = square();
    cout<<"Result = "<<result<<endl;

    return 0;
}


int square(){
    int a;
    cout<<"Enter a Number"<<endl;
    cin>>a;

    return (a*a);
}