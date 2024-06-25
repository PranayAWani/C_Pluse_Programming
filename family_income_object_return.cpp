#include<iostream>
using namespace std;
class service;
class business{
    int profit;
    public:
    void get(){
        cout<<"\n Enter your Profit of this month:- ";
        cin>>profit;
    }
    void put(){
        cout<<"\n Total Profit :- "<<profit;
    }
    friend void add(business , service);
};
class service{
    int sal;
    public:
    void get(){
        cout<<"\n Enter your Salary of this month:- "; 
        cin>>sal;
    }
    void put(){
        cout<<"\n Total Salary :- "<<sal;
    }
    friend void add(business , service);
};
void add(business b, service s){
    int income;
    income= b.profit+ s.sal;
    cout<<"\n Total income :- "<<income;
}
int main(){
    business b1;
    service s1;
    b1.get();
    s1.get();
    b1.put();
    s1.put();
    add(b1,s1);
}