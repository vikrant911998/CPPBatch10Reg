//Deletion in Array
//left shift of elements
//forward(increment) direction loop.

#include<iostream>
using namespace std;


int main(){
    int a[5] = {20,40,12,80,55,};
    int index;

    cout<<"Enter the index"<<endl;
    cin>>index;
    int i;
    for(i = index ; i<4 ; i++){
        a[i] = a[i+1];
    }
    a[i] = 0;


    for(i=0;i<5;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}