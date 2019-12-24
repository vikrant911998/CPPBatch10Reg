// Ternary Operator or Conditional Operator

#include<iostream>
using namespace std;


int main(){
    
    int num;

    cout<<"Enter a Number"<<endl;
    cin>>num;

    (num%2 == 0) ? cout<<"Number is Even"<<endl : cout<<"Number is Odd"<<endl ;

    return 0;
}
