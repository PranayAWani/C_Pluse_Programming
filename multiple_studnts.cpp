#include<iostream>
using namespace std;
class student{
    int roll,p,c,m;
    string name;
    public:
    void get(){
        cout<<"\n Enter roll no ,name ,and marks of physics chemistry and maths";
        cin>>roll>>name>>p>>c>>m;
    }
    void put(){
        cout<<"\n Roll no.:- "<<roll;
        cout<<"\n Name of Student:- "<<name;
        cout<<"\n Total Marks:- "<<p+c+m;
        cout<<"\n Percentage Obtained:- "<<(p+c+m)/3 <<"%";
    }
};
int main(){
    int i;
    cout<<"\n Enter the number of student:- ";
    cin>>i; 
    student s[i];
    for(int j=0;j<i;j++){
        s[j].get();
    }
    for(int j=0;j<i;j++){
        s[j].put();
    }
}