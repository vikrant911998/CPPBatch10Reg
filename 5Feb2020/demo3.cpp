#include<iostream>
using namespace std;

int main(){
    int num = 3456;
    int reverse = 0;
    cout<<num<<endl;

    while(num != 0){
        int temp = num%10; //5

        reverse = reverse*10 + temp; // 6*10 + 5 = 65
        num = num/10;  // 3456/10 -> 345
    }

    cout<<reverse<<endl;

    return 0;
}