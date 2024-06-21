#include<iostream>
using namespace std;
class number{
    int a,b,c;
    public:
    void collect(){
        cout<<"\n Enter Two Number:- ";
        cin>>a>>b;
    }
    void put(){
        cout<<"\n Value of A = "<<a;
        cout<<"\n Value of B = "<<b;
    }
    void sum();
};
inline void number::sum(){
    c=a+b;
    cout<<"\nAddition of two number= "<<c;
}
int main(){
    number n1;
    n1.collect();
    n1.put();
    n1.sum();
}