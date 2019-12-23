#include<iostream>
using namespace std;


int main(){
    string name1,name2;

    cout<<"Enter the First Name"<<endl;
    cin>>name1;

    cout<<"Enter the Second Name"<<endl;
    cin>>name2;

    if(name1 == name2){
        cout<<"Same Name"<<endl;
    }
    else{
        cout<<"Not Same Name"<<endl;
    }

    return 0;
}