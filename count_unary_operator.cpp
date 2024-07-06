#include<iostream>
using namespace std;
class unary{
    int count;
    public:
    unary(){
        count=90;
    }
    void operator ++(){
        count=count+69;
    }
    void put(){
        cout<<"\n Count:- "<<count;
    }
};
int main(){
    unary u1;
    cout<<"\n Current value of count:- ";
    u1.put();
    ++u1;
    cout<<"\n Current value of count:- ";
    u1.put();
    ++u1;
    cout<<"\n Current value of count:- ";
    u1.put();

}
