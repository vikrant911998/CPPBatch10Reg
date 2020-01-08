//No return type and No Arguments.

#include<iostream>
using namespace std;

//function declaration.
void calculate();


int main(){
    //calling
    calculate();

    return 0;
}


//function Definition
void calculate(){
    int a,b,sum;
    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;
    sum= a*a + b*b;
    cout<<"Sum = "<<sum<<endl;

}
