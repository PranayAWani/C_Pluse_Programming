#include<iostream>
using namespace std;
class unary{
    int count;
    public:
    unary(){
        count=98;
    }
    void put(){
        cout<<"\n Count:- "<<count;
    }
    void operator ++();
};
void unary:: operator ++(){
    count=count+46;
}
int main(){
    unary u1;
    cout<<"\n Current Value of count:- ";
    u1.put();
    ++u1;
    cout<<"\n Current Value of count:- ";
    u1.put();
    ++u1;
    cout<<"\n Current Value of count:- ";
    ++u1;
    u1.put();
}