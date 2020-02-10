#include<iostream>
using namespace std;

//With return type and no argument

string generateID(){         
    string str = "GLOBALSTR";

    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    str = str + to_string(num);

    return str;
}


int main(){
    string result = generateID();

    cout<<"ID1 = "<<result<<endl;

    return 0;
}