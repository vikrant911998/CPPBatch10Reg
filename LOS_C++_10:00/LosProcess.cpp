#include "Customer.cpp"

#define SOURCING 1
#define QDE 2
#define DEDUPE 3
#define SCORE 4
#define APPROVAL 5
#define SIZE 50

int number = 1230;
int k=0;


class Losprocess{

    Customer list[SIZE];
    public:

        Customer * getNegative(){
            Customer arr[2];
            Customer localcustomer;
            Personal localpersonal;
            Loan localloan;

            localcustomer.setApplicationNumber(1245);
            localpersonal.input("Vikas","Kumar","Male",25,23456734);
            localloan.input(3,100000,"EL");
            localcustomer.setPersonalInfo(localpersonal);
            localcustomer.setLoanInfo(localloan);

            arr[0] = localcustomer;

            localcustomer.setApplicationNumber(1251);
            localpersonal.input("Rahul","Kumar","Male",29,987234123);
            localloan.input(2,200000,"HL");
            localcustomer.setPersonalInfo(localpersonal);
            localcustomer.setLoanInfo(localloan);

            arr[1] = localcustomer;

            return arr;
        }

        void sourcing(){

            Customer customer;
            customer.setStage(SOURCING);
            customer.setApplicationNumber(number);
            number++;

            string firstName,lastName,gender;
            int age;
            long mobile;

            cout<<"Enter the FirstName "<<endl;
            cin>>firstName;
            cout<<"Enter the LastName "<<endl;
            cin>>lastName;
            cout<<"Enter the Gender "<<endl;
            cin>>gender;
            cout<<"Enter the Age "<<endl;
            cin>>age;
            cout<<"Enter the mobile "<<endl;
            cin>>mobile;

            Personal personal;
            personal.input(firstName,lastName,gender,age,mobile);

            customer.setPersonalInfo(personal);

            string type;
            int duration;
            double amount;

            cout<<"Enter the Loan Type: HL(Home Loan), EL(Education Loan)"<<endl;
            cin>>type;
            cout<<"Enter the Duration of Loan"<<endl;
            cin>>duration;
            cout<<"Enter the Loan Amount"<<endl;
            cin>>amount;

            Loan loan;
            loan.input(duration,amount,type);
            customer.setLoanInfo(loan);
            
            cout<<endl;
            cout<<"**************SOURCING INFORMATION**************"<<endl;
            customer.getPersonalInfo().output();
            customer.getLoanInfo().output();
            cout<<"Application Number = "<<customer.getApplication()<<endl;
            cout<<"Stage = "<<customer.getStage()<<endl;
            cout<<endl;

            list[k] = customer;
            k++;
        }

        void qde(int temp){
            list[temp].setStage(QDE);

            string pancard;
            string aadhar;
            double income,liability;

            cout<<"Enter the Aadhar Number "<<endl;
            cin>>aadhar;
            cout<<"Enter the Pancard Number "<<endl;
            cin>>pancard;
            cout<<"Enter the Income "<<endl;
            cin>>income;
            cout<<"Enter the Liability "<<endl;
            cin>>liability;

            list[temp].getPersonalInfo().setAadhar(aadhar);
            list[temp].getPersonalInfo().setPancard(pancard);
            list[temp].input(income,liability);

            cout<<endl;
            cout<<"***********QDE INFORMATION***************"<<endl;
            list[temp].getPersonalInfo().output();
            list[temp].getLoanInfo().output();
            cout<<"Aadhar = "<<list[temp].getPersonalInfo().getAadhar()<<endl;
            cout<<"Pancard = "<<list[temp].getPersonalInfo().getPancard()<<endl;
            cout<<"Income = "<<list[temp].getIncome()<<endl;
            cout<<"Liability = "<<list[temp].getLiability()<<endl;

            cout<<endl;
        }

        void dedupe(int temp){
            list[temp].setStage(DEDUPE);
            int negative_score = 0;

            Customer *negative = getNegative();

            for(int i=0;i<2;i++){
                if( negative[i].getPersonalInfo().getFirstName() == list[temp].getPersonalInfo().getFirstName() ){
                    negative_score += 50;
                }

                if( negative[i].getPersonalInfo().getLastName() == list[temp].getPersonalInfo().getLastName() ){
                    negative_score += 50;
                }
            }

            if(negative_score >= 50){
                cout<<"You are a Negative Customer, So No Loan Applicable"<<endl;
                exit(0);
            }
        }

        void scoring(int temp){
            list[temp].setStage(SCORE);
            int score = 0;

            if(list[temp].getPersonalInfo().getAge() >= 25){
                score +=5;
            }
            if(list[temp].getIncome() >= 45000){
                score += 5;
            }
            list[temp].getLoanInfo().setScore(score);

            cout<<endl;
            cout<<"*************SCORING INFORMATION**************"<<endl;
            cout<<"Application = "<<list[temp].getApplication()<<endl;
            list[temp].getPersonalInfo().output();
            list[temp].getLoanInfo().output();
            cout<<"Customer Score = "<<list[temp].getLoanInfo().getScore()<<endl;

        }

        void approval(int temp){
            
        }


        void moveToNextStage(int temp){

            if( list[temp].getStage() == 1){
                qde( temp );
            }
            else if( list[temp].getStage() == 2){
                dedupe( temp );
            }
            else if( list[temp].getStage() == 3){
                scoring( temp );
            }
            else if( list[temp].getStage() == 4){
                approval( temp );
            }

        }

        void checkStage(int application){
            bool isFound = false;
            int temp = 0;

            for(int i=0; i<=k ; i++){
                if( list[i].getApplication() == application ){
                    isFound = true;
                    temp = i;
                }
            }

            if(isFound){
                //move to next stage
                moveToNextStage( temp );
            }
            else{
                cout<<"Invalid Application Number"<<endl;
                cout<<endl;
                return;
            }
        }
};