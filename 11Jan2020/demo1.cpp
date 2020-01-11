#include<iostream>
using namespace std;

//function declarations.
int takeBasic(); //->taking basicsalary from user.
float calHra(int); // calculating HRA and returning it.
float calDa(int); // calculating DA and returning it.
float calTa(int); // calculating TA and returning it.
void netSalary(int, float, float, float, int); // calculating netSalary and printing it.



int main(){
    float hra,da,ta;
    int basicSal = takeBasic();
    const int PF = 1400;

    hra = calHra(basicSal);
    da = calDa(basicSal);
    ta = calTa(basicSal);

    netSalary(basicSal,hra,da,ta,PF);

    return 0;
}

void netSalary(int bs, float hra, float da, float ta, int PF){
    float ns = (bs+hra+da+ta)-PF;
    cout<<"Net SALARY = "<<ns<<endl;
}


float calHra(int bs){
    return (bs*0.3);
}

float calDa(int bs){
    return (bs*0.2);
}

float calTa(int bs){
    return (bs*0.1);
}

int takeBasic(){
    int bs;
    cout<<" Enter the Basic Salary "<<endl;
    cin>>bs;

    return bs;
}