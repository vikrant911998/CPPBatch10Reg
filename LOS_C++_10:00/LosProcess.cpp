#include "Customer.cpp"

#define SOURCING 1
#define QDE 2
#define DEDUPE 3
#define SCORE 4
#define APPROVAL 5
#define EMI 6
#define SIZE 50

int number = 1230;
int k=0;

class Losprocess{

    Customer list[SIZE];
    public:

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

        }


};