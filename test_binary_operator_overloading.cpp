#include<iostream>
using namespace std;
class exam{
    int p,c,m;
    public:
    void get(){
        cout<<"\n Enter marks of physics chemistry and maths:- ";
        cin>>p>>c>>m;
    }
    void put(){
        cout<<"\n\t"<<p<<"\t\t"<<c<<"\t\t"<<m;
    }
    exam operator +(exam t){
        exam temp;
        temp.p=p+t.p;
        temp.c=c+t.c;
        temp.m=m+t.m;
        return (temp);
    }
};
int main(){
    exam t1,t2,t3;
    cout<<"\n Test 1:- ";
    t1.get();
    cout<<"\n Test 2:- ";
    t2.get();
    t3=t1+t2;
    cout<<"\n Physics \t Chemistry \t    Maths";
    t1.put();    
    t2.put();    
    t3.put();
}