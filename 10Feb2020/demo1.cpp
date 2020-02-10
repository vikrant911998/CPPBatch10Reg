#include<iostream>
using namespace std;

//With return type and with argument

string format(string str){         //Hello
    str = str+"@.com";      //Hello@.com
    return str;
}


int main(){
    string demo; 
    cout<<"Enter a String"<<endl;
    cin>>demo;

    // string result = format(demo);

    // cout<<result<<endl;
    cout<<format(demo)<<endl;

    return 0;
}