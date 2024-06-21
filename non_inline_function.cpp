#include<iostream>
using namespace std;
class series{
    int no,i,f;
    public:
    void get(){
        cout<<"\n Enter number to check factorial:- ";
        cin>>no;
    }
    void factorial();
};
void series:: factorial(){
    f=1;
    for(i=1;i<=no;i++){
        f=f*i;
    }
    cout<<"\n Factorial ="<<f;
}
int main(){
    series s1;
    s1.get();
    s1.factorial();
}