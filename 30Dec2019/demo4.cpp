#include<iostream>
using namespace std;


int main(){
    int size = 6;
    int a[6]={12,10,41,5,61,2};
    int index,i;

    cout<<"Array Before"<<endl;
    for( i=0 ; i<6 ; i++ ){
        cout<<a[i]<<" ";
    } 

    cout<<"Enter the Index"<<endl;
    cin>>index;

    if(index > size-1){
        cout<<"Invalid Index"<<endl;
    }
    else{
        for( i=index ; i<size-1 ; i++ ){
            a[i] = a[i+1];
        }
        a[size-1] = 0;
    }


    cout<<"Array After"<<endl;
    for( i=0 ; i<6 ; i++ ){
        cout<<a[i]<<" ";
    } 

    cout<<endl;

    return 0;
}