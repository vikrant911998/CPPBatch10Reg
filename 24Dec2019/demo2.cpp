//Switch case in Number(CPP)

#include<iostream>
using namespace std;


int main(){
    int num;

    cout<<"Enter a Number"<<endl;
    cin>>num;

    switch(num){
        case 1 :cout<<"Number is 1"<<endl;
            break;
        case 2 :cout<<"Number is 2"<<endl;
            break;
        case 3 :cout<<"Number is 3"<<endl;
            break;
        case 4 :cout<<"Number is 4"<<endl;
            break;
        case 5 :cout<<"Number is 5"<<endl;
            break;
        default:cout<<"Invalid Case"<<endl;
    }


    return 0;
}