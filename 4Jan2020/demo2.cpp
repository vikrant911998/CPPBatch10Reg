#include<iostream>
using namespace std;

int main(){
    int a[3][2];


    cout<<"Enter the 6 Elements"<<endl;
    for( int i=0 ; i<3 ; i++ ){

        for( int j=0 ; j<2 ; j++ ){
            cin>>a[i][j];
        }
    }


    cout<<endl;


    cout<<"Array Elements are "<<endl;
    for( int i=0 ; i<3 ; i++ ){

        for( int j=0 ; j<2 ; j++ ){
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }



    return 0;
}