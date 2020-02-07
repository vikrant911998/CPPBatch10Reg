//File Handling-> writing
//Absolute Path -> from root drive or folder.(root->C:,Users)
//Relative Path -> current folder.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    char arr[30];
    string str;

    // file.open( "example.txt" , ios::out ); //Opens a File.
    file.open( "example.txt" , ios::app );

    // file.put('A');
    file.put('\n');
    // cout<<"Enter Something"<<endl;
    // cin>>arr;
    // file.write( arr,12 );

    cout<<"Enter a String"<<endl;
    // cin>>str;
    getline(cin,str);

    file<<str;

    file.close(); //Closes a File.
    return 0;
}