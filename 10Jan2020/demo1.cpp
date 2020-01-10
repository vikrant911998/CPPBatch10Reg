#include<iostream>
using namespace std;

//function declaration
void checkVowel(char);


int main(){
    // checkVowel('A'); //arguments.
    char chr;
    cout<<"Enter the Character"<<endl;
    cin>>chr;
    checkVowel(chr);

    return 0;
}


//2.No return type and with arguments
//Definition of Function.
void checkVowel(char c){ //Parameters
    switch(c){
        case 'A':cout<<"Alphabet is Vowel";
        break;
        case 'I':cout<<"Alphabet is Vowel";
        break;
        case 'O':cout<<"Alphabet is Vowel";
        break;
        case 'E':cout<<"Alphabet is Vowel";
        break;
        case 'U':cout<<"Aplhabet is Vowel";
        break;
        default:cout<<"Aplhabet is Consonant";
    }
}