#include<iostream>
using namespace std;
class emp{
    float sal;
    string ename;
    public:
    void get(){
        cout<<"\nEnter employ name and sal:- ";
        cin>>ename>>sal;
    }
    void put(){
        cout<<"\nEmploy name :- "<<ename;
        cout<<"\nEmploy Salary :-"<<sal;
    }
};
class dept:private emp{
    int dno;
    string dname;
    public:
    void in(){
        get();
        cout<<"\n Enter department name and number :- ";
        cin>>dname>>dno;
    }
    void out(){
        put();
        cout<<"\n Departname number :- "<<dno ;
        cout<<"\n Departname name :- "<<dname ;
    }
};
int main(){
    dept d1;
    d1.in();
    d1.out();

}
