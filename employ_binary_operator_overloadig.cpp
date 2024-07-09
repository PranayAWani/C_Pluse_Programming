#include<iostream>
using namespace std;
class emp{
    int bsal,hra;
    public:
    void get(){
        cout<<"\n Enter bsal and hra:- ";
        cin>>bsal>>hra;
    }
    void put(){
        cout<<"\n "<<bsal<<"\t"<<hra;
    }
    friend emp operator +(int,emp);
};
emp operator +(int n,emp e){
    emp temp;
    temp.bsal=n+e.bsal;
    temp.hra=n+e.hra;
    return (temp);
}
int main(){
    emp e1,e2;
    int amount;
    cout<<"\n Enter the bsal and hra for the first employ:- ";
    e1.get();
    cout<<"\n Enter the amount :- ";
    cin>>amount;
    e2=amount+e1;
    cout<<"\n Bsal \t Hra";
    e1.put();
    e2.put();
}