#include<iostream>
using namespace std;


int main(){
    int a[5] = {71,21,12,51,3};
    int i=0;

    for( i=0 ; i<5 ; i++ ){

        if( a[i]%2 == 0 )
            cout<<a[i]<<" Even"<<endl;
        else
            cout<<a[i]<<" Odd"<<endl;

    }



    return 0;
}