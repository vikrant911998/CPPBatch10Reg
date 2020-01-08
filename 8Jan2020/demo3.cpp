#include<iostream>
using namespace std;

void checkTriangle();


int main(){
    checkTriangle();

    return 0;
}

void checkTriangle(){
    int s1,s2,s3;

    cout<<"Enter the three sides of the triangle"<<endl;
    cin>>s1>>s2>>s3;

    if( s1==s2 && s2==s3 ){
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(s1==s2  || s2==s3  || s3==s1){
        cout<<"Isosceles Triangle"<<endl;
    }
    else{
        cout<<"Scalene Triangle "<<endl;
    }

}