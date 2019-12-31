#include<iostream>
using namespace std;

int main(){
    int a[5]={11,22,33,44,55};
    int i,ecount=0,ocount=0;

    for( i=0 ; i<5 ; i++ ){

        if(a[i]%2 == 0){
            ecount++;
        }
        else
        {
            ocount++;
        }
        
    }

    cout<<"Even Count = "<<ecount<<endl;
    cout<<"Odd Count = "<<ocount<<endl;

    return 0;
}