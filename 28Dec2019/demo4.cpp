#include<iostream>
using namespace std;

int main(){
    //Array Declaration.
    int a[5];

    int b[] = {23,14,2,51,63,29}; // b's size -> 6
    // 23 Odd
    // 14 even
    // 2 even
    // 51 odd

    int c[5] = {1,2,3,4,5};


    int i=0;
    for( i=0 ; i<6 ; i++ ){
        cout<<b[i]<<" ";
    }

    cout<<endl;



    return 0;
}