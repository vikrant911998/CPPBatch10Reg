//Templates in Function

#include<iostream>
using namespace std;

template<typename T,typename T1>

void add(T a, T1 b){
    T result = a+b;
    cout<<"Sum = "<<result<<endl;
}

// void add(double d,double e){
//     cout<<"Sum = "<<d+e<<endl;
// }


int main(){
    add(2,3);
    add(23.45,45.67);
    // add("Hello"," World");

    return 0;
}