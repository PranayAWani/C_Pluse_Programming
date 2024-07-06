#include<iostream>
using namespace std;
class emp{
    int bsal,hra;
    public:
    void get(){
        cout<<"\n Enter Basic salary and hra:- ";
        cin>>bsal>>hra;
    }
    void put(){
        cout<<"\n"<<bsal<<"\t"<<hra;
    }
    emp operator +(int amt){
        emp temp;
        temp.bsal=bsal + amt;
        temp.hra=hra+ amt;
        return (temp);
    }
};
int main(){
    emp e1,e2;
    int amt;
    cout<<"\n Enter the amount you want to add in hra and bsal:- ";
    cin>>amt;
    cout<<"\n Enter the basic salary and hra of employ:- ";
    e1.get();
    e2=e1+amt;
    e1.put();
    e2.put();
}