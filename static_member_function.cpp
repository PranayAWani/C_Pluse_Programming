#include<iostream>
#include<string>
using namespace std;
class shop{
    int id,qty;
    string name;
    float rate,amt;
    static float totalamt;
    public:
    void get(){
        cout<<"\n Enter the product id, name, quantity and rate:- ";
        cin>>id>>name>>qty>>rate;
    }
    void cal(){
        amt=rate*qty;
        totalamt = amt + totalamt;
    }
    void put(){
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<qty<<"\t"<<rate;
    }
    static void total_amt(){
        cout<<"\nTotal Bill Amount:- \t"<<totalamt;
    }
};
float shop::totalamt;
int main(){
    shop s1,s2,s3;
    s1.get();
    s2.get();
    s3.get();
    s1.cal();
    s2.cal();
    s3.cal();
    s1.put();
    s2.put();
    s3.put();
    shop::total_amt();
}