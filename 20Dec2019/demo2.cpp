#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b;
    // b = ++a; pre increment

    b = a++; // a = a+1; // post increment
    b = a--; //post decrement
    b = --a; //pre decrement

    return 0;
}