#include<iostream>
using namespace std;

int main(){
    int num,reverse = 0,temp=0;

    cout<<"Enter a Number"<<endl;
    cin>>num;

    //5276
    while(num != 0){
        
        temp = num%10;
        reverse = reverse*10 + temp; //6720 +5=6725
        num = num/10;  //5276/10=527

    }

    cout<<"Reverse = "<<reverse<<endl;

    return 0;
}