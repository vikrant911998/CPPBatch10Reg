#include<iostream>
using namespace std;

class Programming{
    public:
        Programming(){
            cout<<"I Love Programming Languages"<<endl;
        }

        Programming(string n){
            cout<<"I Love "<<n<<endl;
        }
};  

int main(){
    Programming obj,obj1("JAVA");

    return 0;
}