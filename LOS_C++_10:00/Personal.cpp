#include<iostream>
using namespace std;

class Personal{
    private:
        string firstName;
        string lastName;
        string gender;
        int age;
        long mobile;
        string aadhar;
        string pancard;

    public:

        void input(string firstName,string lastName,string gender,int age, long mobile){
            this->firstName = firstName;
            this->lastName = lastName;
            this->gender = gender;
            this->age = age;
            this->mobile = mobile;
        }

        void output(){
            cout<<"FirstName = "<<firstName<<endl;
            cout<<"LastName = "<<lastName<<endl;
            cout<<"Gender = "<<gender<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Mobile = "<<mobile<<endl;
        }
};