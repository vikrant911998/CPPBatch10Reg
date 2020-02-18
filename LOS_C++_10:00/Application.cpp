#include<iostream>
#include "LosProcess.cpp"
using namespace std;

int main(){
    Losprocess process;
    int application;

    while(true){
        cout<<"Enter the Application Number ,otherwise enter zero to start, enter -1 to end"<<endl;
        cin>>application;

        if(application == 0){
            process.sourcing();
        }
        else{
            //checkStage
        }

        if(application == -1){
            cout<<"Thanks for Using"<<endl;
            exit(0);
        }
    }

    return 0;
}