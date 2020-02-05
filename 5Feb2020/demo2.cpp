//Constant in CPP
#include<iostream>
using namespace std;

//preprocessor ->constants
#define MAX 100


int main(){
    int a = 12;
    a = 200;

    const int b = 100; //constants
    // b = 300; ->Error
    // cout<<MAX<<endl;

    return 0;
}