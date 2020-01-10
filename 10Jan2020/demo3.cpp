//3.with return type and with argument.

#include<iostream>
using namespace std;

//function declaration
bool checkVowel(char );


int main(){
    if(checkVowel('A')){
        cout<<"Character is Vowel"<<endl;
    }
    else{
        cout<<"Character is Consonant"<<endl;
    }

    return 0;
}


//Function Definition
bool checkVowel(char character){
    switch(character){
        case 'A': return true;

        case 'E': return true;
        case 'I': return true;
        case 'O': return true;            
        case 'U': return true;
        default:  return false;
    }
}