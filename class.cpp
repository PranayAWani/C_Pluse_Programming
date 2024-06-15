#include<iostream>
using namespace std;
class student{
    int number;
    char name[10];
    float per;
    public:
    void get(){
        cout<<"Enter students Roll no. name and percentage:- ";
        cin>>number>>name>>per;
    }
    void put(){
        cout<<"\n Roll no.:- "<<number;
        cout<<"\n Name:- "<<name;
        cout<<"\n Percentage:- "<<per;
    }
};
int main(){
    int i;
    cout<<"\n Enter number of students";
    cin>>i;
    student S[i];
    for(int j=0;j<i;j++){
        S[j].get();
    }
    for(int j=0;j<i;j++){
        S[j].put();
    }
}