//Insertion in Array(Right shift of elements).

#include<iostream>
using namespace std;

int main(){
    int arr[6] = {11,22,33,44,55,};
    int index,i,element;

    cout<<"Array Elements Before"<<endl;
    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Enter the Index"<<endl;
    cin>>index;

    cout<<"Enter  the Element to be inserted"<<endl;
    cin>>element;

    for( i=5 ; i>index ; i-- ){
        arr[i] = arr[i-1];
    }
    arr[index] = element;


    cout<<"Array Elements are"<<endl;
    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    return 0;
}