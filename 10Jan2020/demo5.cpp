#include<iostream>
using namespace std;

string checkVowel();

int main(){
    // int a
    string str = checkVowel();

    cout<<"Character is "<<str<<endl;

    return 0;
}

string checkVowel(){
    char c;
    cout<<"ENter a Character"<<endl;
    cin>>c;

    switch(c){
        case 'A':return "Vowel";
        case 'E':return "Vowel";
        case 'I':return "Vowel";
        case 'O':return "Vowel";
        case 'U':return "Vowel";
        default: return "Consonant";
    }
}