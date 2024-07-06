#include<iostream>
using namespace std;
class emp{
    int sal, hra;
    public:
    void get(){
        cout<<"\n Enter Basic Salary and Hra:- ";
        cin>>sal>>hra;
    }
    void put(){
        cout<<"\n"<<sal<<"\t"<<hra;
    }
    emp operator +(emp e){
        emp temp;
        temp.sal=sal+e.sal;
        temp.hra=hra+e.hra;
        return(temp);
    }
};
int main(){
    emp e1,e2,e3;
    cout<<"\n Employ 1:- ";
    e1.get();
    cout<<"\n Employ 2:- ";
    e2.get();
    e3=e1+e2;
    cout<<"\nsal \t hra";
    e1.put();
    e2.put();
    e3.put();
}