//3.with return type and with arguments.

#include<iostream>
using namespace std;

//function Declaration
bool check(int);


int  main(){
    int number;
    cout<<"Enter the Number"<<endl;
    cin>>number;
    bool result = check(number);

    if(result){
    // if(check(number)){
    // if(number%2 == 0){
        cout<<"Number is Even"<<endl; 
    }
    else{
        cout<<"Number is Odd"<<endl; 
    }

    return 0;
}


bool check(int num){

    if(num%2 == 0){
        return true;
    }
    else{
        return false;
    }
}