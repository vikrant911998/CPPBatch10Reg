//File Handling-> Reading
//Absolute Path -> from root drive or folder.(root->C:,Users)
//Relative Path -> current folder.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    char c;
    char arr[30];
    string str;

    file.open( "example.txt", ios::in ); //Opens file in read only mode.

    // file.get(c);
    // cout<<c<<endl;

    // file.get(c);
    // cout<<c<<endl;

    // while( file.eof() == false ){

    //     file.get(c);
    //     cout<<c;       
    // }

    while( file.eof() == false ){

        getline(file,str);
        cout<<str<<endl;       
    }


    file.close(); //Closes a File.
    return 0;
}