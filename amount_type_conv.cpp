#include<iostream>
using namespace std;
class account{
    int bal;
    public:
    account(){
    }
    account(int b){
        bal=b;
    }
    void print(){
        cout<<"\n Current Balance:- "<<bal;
    }
};
int main(){
    account a1;
    int x;
    a1=4000;
    a1.print();
    cout<<"\n Enter the value for x:- ";
    cin>>x;
    a1=x;
    a1.print();
}