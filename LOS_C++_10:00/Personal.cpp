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

        void setAadhar(string aadhar){
            this->aadhar = aadhar;
            cout<<"Inside Set Aadhar "<<this->aadhar<<" "<<aadhar<<endl;
        }

        void setPancard(string pancard){
            this->pancard = pancard;
        }

        void output2(){
            cout<<"Aadhar = "<<this->aadhar<<endl;
            cout<<"Pancard = "<<this->pancard<<endl;
        }

        string getFirstName(){
            return firstName;
        }
        string getLastName(){
            return lastName;
        }
        string getGender(){
            return gender;
        }
        int getAge(){
            return age;
        }
        long getMobile(){
            return mobile;
        }
        string getAadhar(){
            return aadhar;
        }
        string getPancard(){
            return pancard;
        }

};