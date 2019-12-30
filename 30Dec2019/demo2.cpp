//Element Search in Array -2

#include<iostream>
using namespace std;


int main(){
    int a[5] = {12,34,2,65,71};
    int number,i;
    bool isFound = false;

    cout<<"Enter the Number to be searched"<<endl;
    cin>>number;

    for( i=0 ; i<5 ; i++ ){

        if( a[i] == number ){
            isFound = true;
            break;
        }

    }

    if( isFound == true){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    



    return 0;
}