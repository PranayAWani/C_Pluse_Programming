#include<iostream>
#include<string>
using namespace std;
class shop{
    int id, qty;
    string name;
    float rate, amt;
    static float totalamt;
    public:
    void get(){
        cout<<"\n Enter product id, name, quantity and rate:- ";
        cin>>id>>name>>qty>>rate;
    }
    void cal(){
        amt=rate*qty;
        totalamt=amt+totalamt;
    }
    void put()
};