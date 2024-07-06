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
    void put(){
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<qty<<"\t"<<amt;
    }
    static void total_amt(){
        cout<<"\n Total Bill:- "<<totalamt;
    }
};
float shop::totalamt;
int main(){
    int no,i;
    shop *s1, *s2;
    cout<<"\n Enter the number of products:- ";
    cin>>no;
    s1=new shop[no];
    s2=s1;
    for(i=0;i<no;i++){
        s1->get();
        s1->cal();
        s1++;
    }
    for(i=0;i<no;i++){
        s2->put();
        s2++;
    }
    cout<<"\n _________________";
    shop::total_amt();
}