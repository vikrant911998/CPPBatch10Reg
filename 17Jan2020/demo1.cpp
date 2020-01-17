#include<iostream>
using namespace std;

//2+3 = 5

class Marks{
    private:
        int subject1;
        int subject2;
    
    public:
        void setMarks(int sub1,int sub2){
            subject1 = sub1;
            subject2 = sub2;           
        }

        void operator +(){
            cout<<"Total Marks = "<<subject1+subject2<<endl;
        }

};


int main(){
    Marks obj1,obj2;
    obj1.setMarks(200,300);
    obj2.setMarks(400,250);
    // obj1.total(); //500 , +obj1;->500
    // obj1.operator+();
    +obj1;

    return 0;
}