#include<iostream>
using namespace std;

int main(){
    int a[5] = {12,31,56,55,70};
    int rahul = 0;

    for(int i=0;i<5;i++){

        if(a[i]%5 == 0){
            rahul++;
        }

    }

    cout<<rahul<<endl;




    return 0;
}