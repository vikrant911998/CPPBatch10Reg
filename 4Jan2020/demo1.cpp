#include<iostream>
using namespace std;

int main(){
    int a[3][2] = { {1,4} , {5,7} , {8,9} };
    // int i,j,k;
    cout<<"Array Elements are "<<endl;
    for( int i=0 ; i<3 ; i++ ){

        for( int j=0 ; j<2 ; j++ ){
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }



    return 0;
}