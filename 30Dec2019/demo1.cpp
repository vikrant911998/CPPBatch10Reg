//Element Search in Array -1

#include<iostream>
using namespace std;


int main(){
    int a[5] = {12,34,2,65,71};
    int number,i;

    cout<<"Enter the Number to be searched"<<endl;
    cin>>number;

    for( i=0 ; i<5 ; i++ ){

        if( a[i] == number ){
            cout<<"Element Found"<<endl;
            break;
        }

    }

    if(i == 5){
        cout<<"Element Not Found"<<endl;
    }



    return 0;
}