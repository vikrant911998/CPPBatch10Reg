//For-each Loop

#include<iostream>
using namespace std;



int main(){
    int a[5] = {12,34,51,61,16};

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    for(int element : a){
        cout<<element<<" ";
    }

    return 0;
}