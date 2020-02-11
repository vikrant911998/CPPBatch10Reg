#include<iostream>
using namespace std;

int main(){
    int a[6] = { 12,3,45,6,18,0 };
    int index,i,element;

    cout<<"Array Before Insertion"<<endl;
    for(i=0;i<6;i++){
        cout<<a[i]<<" ";
    }


    cout<<"Enter the Index "<<endl;
    cin>>index; //2

    cout<<"Enter the Element "<<endl;
    cin>>element;//100

    for( i=5 ; i>index; i-- ){
        a[i] = a[i-1];
    }
    a[index] = element;


    cout<<"Array After Insertion"<<endl;
    for(i=0;i<6;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}