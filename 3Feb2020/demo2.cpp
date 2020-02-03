//DL00345NORTH
#include<iostream>
using namespace std;


class License{
    string state;
    string city;
    string licenseNumber;
    static int count;

    public:
        License(string state, string city){
            this->state = state;
            this->city = city;
            this->licenseNumber = state +"_"+ to_string(count) +"_"+ city;
            count++;
        }
        void show(){
            cout<<licenseNumber<<endl;
        }
};

int License::count = 2345;


int main(){
    License l1("DL","NORTH"),l2("DL","NORTH");
    l1.show();
    l2.show();

    return 0;
}