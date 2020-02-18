
#include "Personal.cpp"
#include "Loan.cpp"

class Customer{

    int applicationNumber;
    Personal personalInfo;
    Loan loanInfo;
    int stage;
    double income;
    double liability;

    public:
        void setApplicationNumber(int number){
            this->applicationNumber = number;
        }
        void setStage(int stage){
            this->stage = stage;
        }
        void input(double income, double liability){
            this->income = income;
            this->liability = liability;
        }
        void output(){
            cout<<"Application Number = "<<applicationNumber<<endl;
            cout<<"Stage = "<<stage<<endl;
            cout<<"Income = "<<income<<endl;
            cout<<"Liability = "<<liability<<endl;
        }

        int getApplication(){
            return applicationNumber;
        }
        int getStage(){
            return stage;
        }
        double getIncome(){
            return income;
        }
        double getLiability(){
            return liability;
        }
        Personal getPersonalInfo(){
            return personalInfo;
        }
        Loan getLoanInfo(){
            return loanInfo;
        }

        void setPersonalInfo(Personal personal){
            this->personalInfo = personal;
        }

        void setLoanInfo(Loan loan){
            this->loanInfo = loan;
        }

};