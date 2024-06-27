#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    float per;
    public:
    student (){
        roll= 101;
        name="Pranay";
        per=90.89;
    }
    void print(){
        cout<<"\n Roll no.:- "<<roll;
        cout<<"\n Name:- "<<name;
        cout<<"\n Percentage:- "<<per;
    }
};
int main(){
    student s1;
    s1.print();
}