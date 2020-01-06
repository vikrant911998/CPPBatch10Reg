//Insertion in Array
//right shift of elements
//Backward(decrement) direction loop.

#include<iostream>
using namespace std;


int main(){
    int a[6] = {20,40,12,80,55,};
    int index,element;

    cout<<"Enter the index"<<endl;
    cin>>index;

    cout<<"Enter the Element"<<endl;
    cin>>element;

    int i;
    for(i=5 ; i>index ; i--){
        a[i] = a[i-1];
    }
    a[index] = element;


    for(i=0;i<6;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}