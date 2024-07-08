#include<iostream>
using namespace std;
class factorial{
    int i,f,no;
    public:
    factorial(){
        i=1;
        f=1;
    }
    void get(){
        cout<<"\n Enter the number to calculate factorial:- ";
        cin>>no;
    }
    void put(){
        cout<<"\n Factorial of "<<no<<" is equal to "<<f;
    }
    void operator ++();
};
void factorial::operator ++(){
    for(;i<=no;i++){
        f=i*f;
    }
}
int main(){
    factorial f1;
    f1.get();
    ++f1;
    f1.put();
}