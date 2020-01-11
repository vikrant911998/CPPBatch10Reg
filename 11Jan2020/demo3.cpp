#include<iostream>
using namespace std;


void menu();
void calculate(int);


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
        case 1:calculate(choice);
            break;
        case 2:calculate(choice);
            break;
        case 3:calculate(choice);
            break;
        case 4:calculate(choice);
            break;
        case 5:exit(0);
            break;
        default :cout<<"Invalid Choice"<<endl;
    }

}


void calculate(int choice){
    int a,b;
    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;

    if(choice == 1){
        cout<<"Addition = "<<a+b<<endl;
    }
    else if(choice == 2){
        cout<<"Subtraction = "<<a-b<<endl;
    }
    else if(choice == 3){
        cout<<"Multiplication = "<<a*b<<endl;
    }
    else if(choice == 4){
        cout<<"Division = "<<a/b<<endl;
    }
}

