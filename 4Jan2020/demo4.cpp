#include<iostream>
using namespace std;

int main(){
    int a[3][3], b[3][3], c[3][3];
    int sum =0;

    cout<<"Enter the elements of first matrix"<<endl;
    for( int i=0 ; i<3 ; i++ ){

        for( int j=0 ; j<3 ; j++ ){
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of second matrix"<<endl;
    for( int i=0 ; i<3 ; i++ ){

        for( int j=0 ; j<3 ; j++ ){
            cin>>b[i][j];
        }
    }

    cout<<"First Matrix"<<endl;
    for( int i=0 ; i<3 ; i++ ){

        for( int j=0 ; j<3 ; j++ ){
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<"Second Matrix "<<endl;
    for( int i=0 ; i<3 ; i++ ){

        for( int j=0 ; j<3 ; j++ ){
            cout<<b[i][j]<<" ";
        }

        cout<<endl;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum =0;
            for(int k=0;k<3;k++){
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }


    cout<<"Final Matrix "<<endl;
    for( int i=0 ; i<3 ; i++ ){

        for( int j=0 ; j<3 ; j++ ){
            cout<<c[i][j]<<" ";
        }

        cout<<endl;
    }



    return 0;
}