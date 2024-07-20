#include<iostream>
using namespace std;
class student{
    int rno;
    string name;
    float per;
    public:
    void get(){
        cout<<"\n Enter rno name and percentage of the student :- ";
        cin>>rno>>name>>per;
    }
    void put(){
        cout<<"\n Student Roll no. :- "<<rno;
        cout<<"\n Student name :- "<<name;
        cout<<"\n Student Percentage :- "<<per;
    }
};
class school : private student{
    string sname;
    int sno;
    public:
    void in(){
        get();
        cout<<"\n Enter school number and name:- ";
        cin>>sno>>sname;
    }
    void out(){
        put();
        cout<<"\n School name:- "<<sname;
        cout<<"\n School number:- "<<sno;
    }
};
int main(){
    school s1;
    s1.in();
    s1.out();
}
