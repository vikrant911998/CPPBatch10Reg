#include<iostream>
using namespace std;

class Loan{
    int duration;
    double amount;
    string type;
    double rate;
    double loanPercent;
    int score;

    public:

        void input(int duration,double amount,string type){
            this->duration = duration;
            this->amount = amount;
            this->type = type;
        }

        void output(){
            cout<<"Duration  = "<<duration<<endl;
            cout<<"Amount = "<<amount<<endl;
            cout<<"Type = "<<type<<endl;
        }

        void setRate(double rate){
            this->rate = rate;
        }

        void setPercent(double loanPercent){
            this->loanPercent = loanPercent;
        }

        void setScore(int score){
            this->score = score;
        }

        int getDuration(){
            return duration;
        }
        string getType(){
            return type;
        }
        double getRate(){
            return rate;
        }
        double getPercent(){
            return loanPercent;
        }
        int getScore(){
            return score;
        }
        double getAmount(){
            return amount;
        }

};