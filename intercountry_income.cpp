#include<iostream>
using namespace std;
class india;
class usa{
    int usd;
    public:
    void get(){
        cout<<"\n Enter your profit in USD :- ";
        cin>>usd;
    }
    void put(){
        cout<<"\n Your profit in United States is :- "<<usd;
    }
    friend void add(usa ,india);
};
class india{
    int inr;
    public:
    void get(){
        cout<<"\n Enter your profit in INR :- ";
        cin>>inr;
    }
    void put(){
        cout<<"\n Your profit in India is :- "<<inr;
    }
    friend void add(usa , india);
};

void add(usa u,india i){
    int income;
    income = u.usd+(i.inr*83);
    cout<<"\n Your total profit is :- "<<income;
}

int main(){
    usa u1;
    india i1;
    cout<<"\n Enter your profits in usa:- ";
    u1.get();
    cout<<"\n Enter your profits in india:- ";
    i1.get();
    u1.put();
    i1.put();
    add(u1,i1);
}