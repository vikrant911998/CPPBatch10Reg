#include<iostream>
using namespace std;

int main(){
    int num,reverse = 0,temp=0;

    cout<<"Enter a Number"<<endl;
    cin>>num;

    do{
        
        temp = num %10;
        reverse = reverse*10 + temp;
        num = num/10;

    }while(num != 0);


    cout<<"Reverse = "<<reverse<<endl;


    return 0;
}