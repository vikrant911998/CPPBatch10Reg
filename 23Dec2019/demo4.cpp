#include<iostream>
using namespace std;

int main(){
    double percent;

    cout<<"Enter the Percentage"<<endl;
    cin>>percent;


    if(percent >= 90 && percent <=100){
        cout<<"A grade"<<endl;
    }
    else if(percent >=60 && percent <90){
        cout<<"B grade"<<endl;
    }
    else if(percent < 60){
        cout<<"C grade"<<endl;
    }

    return 0;
}