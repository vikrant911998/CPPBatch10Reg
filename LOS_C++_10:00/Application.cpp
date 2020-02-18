#include<iostream>
#include "LosProcess.cpp"
using namespace std;

int main(){
    Losprocess process;
    int application;

    cout<<"Enter the Application Number "<<endl;
    cin>>application;

    if(application == 0){
        process.sourcing();
    }

    return 0;
}