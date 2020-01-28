//DEFAULT ARGUMENT
#include<iostream>
using namespace std;

// void add(int ,int );
// void add(int,int,int =0); //default argument

void add(int a=0,int b=0,int c=0,int d=0){
    cout<<"SUM = "<<a+b+c+d<<endl;
}


int main(){
    add();
    add(12);
    add(2,3);
    add(1,2,4);
    add(2,3,5,4);

    return 0;
}

// void add(int a,int b){
//     cout<<"SUM = "<<a+b<<endl;
// }

