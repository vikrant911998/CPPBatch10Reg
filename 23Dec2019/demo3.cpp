#include<iostream>
using namespace std;


int main(){
    int a;

    cout<<"Enter a Number"<<endl;
    cin>>a;

    if(a%5 == 0){
        cout<<a<<" is divisible by 5 with remainder "<<a%5<<endl;
    }
    else{
        cout<<a<<" is not  divisible by 5 with remainder "<<a%5<<endl;
    }

    return 0;
}