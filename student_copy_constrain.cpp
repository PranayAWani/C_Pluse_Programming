#include<iostream>
#include<string>
using namespace std;
class student{
    int rno;
    string name;
    float per;
    public:
    student(){
        rno=101;
        name= "pranay";
        per = 79.89;
    }
    student(int r, float p){
        rno=r;
        name="Aditi";
        per=p;
    }
    void print(){
        cout<<"\n Roll no:- "<<rno;
        cout<<"\n Name:- "<<name;
        cout<<"\n Percentage:- "<<per;
    }
};
int main(){
    student s1,s2(102,90.89);
    cout<<"\n Details of 1st student:- ";
    s1.print();
    cout<<"\n Details of 2nd student:- ";
    s2.print();
    student s3=s1;
    cout<<"\n Details of 3rd student:- ";
    s1.print();
    student s4=s2;
    cout<<"\n Details of 4th student:- ";
    s4.print();

}