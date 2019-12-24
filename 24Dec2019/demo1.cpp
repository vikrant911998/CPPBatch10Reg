//Switch Case in CPP

#include<iostream>
using namespace std;

int main(){
    char str; 

    cout<<"Enter a Character"<<endl;
    cin>>str;

    switch(str){
        case 'A':cout<<"Character is Vowel"<<endl;
            break;
        case 'E':cout<<"Character is Vowel"<<endl;
            break;
        case 'I':cout<<"Character is Vowel"<<endl;
            break;
        case 'O':cout<<"Character is Vowel"<<endl;
            break;
        case 'U':cout<<"Character is Vowel"<<endl;
            break;
        case 'a':cout<<"Character is Vowel"<<endl;
            break;
        case 'e':cout<<"Character is Vowel"<<endl;
            break;
        case 'i':cout<<"Character is Vowel"<<endl;
            break;
        case 'o':cout<<"Character is Vowel"<<endl;
            break;
        case 'u':cout<<"Character is Vowel"<<endl;
            break;
        default: cout<<"Character is Consonant"<<endl;
            break;
    }


    return 0;
}
