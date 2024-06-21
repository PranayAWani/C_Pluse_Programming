#include<iostream>
using namespace std;
class reverse{
    int no,rev,rem;
    public:
    void get(){
        cout<<"\n Enter the number to reverse";
        cin>>no;
        cout<<"\n Before reversing the number :- ";<<no;
    }
    void reves();
}
void reverse::reves(){
    rev=0;
    while(no>0){
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    cout<<"After Reversing the number :- "<<rev;
}

void main(){
    reverse r1;
    r1.get();
    r1.reves();
}