#include<iostream>
using namespace std;
class student{
    int rno;
    string name;
    public:
    void get(){
        cout<<"\n Enter rno and name :- ";
        cin>>rno>>name;
    }
    void put(){
        cout<<"\n Rno:- "<<rno;
        cout<<"\n Name:- "<<rno;
    }
};
class test1: public student{
    public:
    int p,c,m;
    void collect(){
        cout<<"\n Enter marks of physics chemistry and maths:- ";
        cin>>p>>c>>m;
    }
    void print(){
        cout<<"\n "<<p<<"\t "<<c<<"\t"<<m;
    }
};
class test2: public test1{
    public:
    int dsd,nt,cnc;
    void in(){
        cout<<"\n Enter your marks of dsd nt and cnc:- ";
        cin>>dsd>>nt>>cnc;
    }
    void out(){
        cout<<"\n "<<dsd<<"\t "<<nt<<"\t"<<cnc;
    }
};
class cal: public test2{
    public:
    int total;
    float per;
    void calci(){
        total=p+c+m+dsd+nt+cnc;
        per=total/6;
        cout<<"\n Total marks of 6 subjects are:- "<<total;
        cout<<"\n Percentage obtained:- "<<per;
    }
};
int main(){
    cal c1;
    c1.get();
    c1.collect();
    c1.in();
    c1.put();
    c1.print();
    c1.out();
    c1.calci();
}
