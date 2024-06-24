#include<iostream>
using namespace std;
class emp{
    int bsal, hra;
    public:
    void get(){
        cout<<"\n Enter Basic salary and HRA:- ";
        cin>>bsal>>hra;
    }
    void add(emp x, emp y){
        bsal=x.bsal+y.bsal;
        hra=x.hra+y.hra;
    }
    void put(){
        cout<<"\n"<<bsal<<"\t"<<hra;
    }
};
int main(){
    emp e1,e2,e3;
    cout<<"\n Enter basic salary and Hra for First Employ";
    e1.get();
    cout<<"\n Enter basic salary and Hra for Second Employ";
    e2.get();
    e3.add(e1,e2);
    e1.put();
    e2.put();
    e3.put();
}