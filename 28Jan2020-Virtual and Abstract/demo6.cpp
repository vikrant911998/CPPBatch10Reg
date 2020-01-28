//FOR-EACH_LOOP

#include<iostream>
using namespace std;

int main(){
    int a[5] = {51,12,37,42,5};

    //traditional for-loop
    // for(int i=0 ; i<5 ; i++){
    //     cout<<a[i]<<" ";
    // }



    //for-each loop
    for(int i : a){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}