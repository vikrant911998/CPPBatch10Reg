#include<iostream>
using namespace std;


void menu();
void addition();
void subtraction();
void multiplication();
void division();


int main(){

    while(true){
        menu();
    }

    return 0;
}


void menu(){
    int choice;

    cout<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<endl;

    cout<<"Enter Your Choice"<<endl;
    cin>>choice;

    switch(choice){
        case 1:addition();
            break;
        case 2:subtraction();
            break;
        case 3:multiplication();
            break;
        case 4:division();
            break;
        case 5:exit(0);
            break;
        default :cout<<"Invalid Choice"<<endl;
    }

}


void addition(){
    int a,b;
    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;
    cout<<"Addition = "<<a+b<<endl;
}

void subtraction(){
    int a,b;
    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;
    cout<<"Subtraction = "<<a-b<<endl;
}

void multiplication(){
    int a,b;
    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;
    cout<<"Multiplication = "<<a*b<<endl;
}

void division(){
    int a,b;
    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;
    cout<<"Division = "<<a/b<<endl;
}