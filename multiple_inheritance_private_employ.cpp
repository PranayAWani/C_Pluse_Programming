#include<iostream>
using namespace std;
class emp{
    int id;
    string name;
    float sal;
    public: 
    void get(){
        cout<<"\n Enter emp id name and salary :- ";
        cin>>id>>name>>sal;
    }
    void put(){
        cout<<"\n Employ id :- "<<id;
        cout<<"\n Employ name :- "<<name;
        cout<<"\n Employ Salary :- "<<sal;
    }
};
class dept: private emp{
    int dno;
    string dname;
    public:
    void in(){
        get();
        cout<<"\n Enter department number and name:- ";
        cin>>dno>>dname;
    }
    void out(){
        put();
        cout<<"\n Department number:- "<<dno;
        cout<<"\n Department name:- "<<dname;
    }
};
class manager: private dept{
    int mno;
    string mname;
    public:
    void collect(){
        in();
        cout<<"\n Enter managers id and name:- ";
        cin>>mno>>mname;
    }
    void print(){
        out();
        cout<<"\n Managers id:- "<<mno;
        cout<<"\n Managers name:- "<<mname;
    }
};
int main(){
    manager m1;
    m1.collect();
    m1.print();
}
