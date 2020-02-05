//Exception Handling
//Exception-> Runtime Error which occurred on execution.
#include<iostream>
using namespace std;


int main(){
    int id;

    cout<<"Enter the Id in Number"<<endl;
    cin>>id;
    string str = "Negative";
    try{

        if(id < 0){
            throw str; //int type
        }
    }
    // catch(int a){
    //     cout<<"Negative Id Input due to "<<a<<endl;  
    // }
    // catch(string e2){
    //     cout<<"Invalid Id Input due to "<<e2<<endl;  
    // }
    catch(...){
        cout<<"All Exceptions handled"<<endl;
    }
    
    
    


    return 0;
}