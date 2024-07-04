#include<iostream>
#include<string>
using namespace std;
class demo{
    int rno;
    string name;
    float per;
    public:
    static int std;
    demo(){
        rno=1;
        name="Pranay";
        per=90.88;
    }
    void print(){
        cout<<"\n Roll no="<<rno;
        cout<<"\n Name:- "<<name;
        cout<<"\n Percentage:- "<<per;
    }
};
int main(){
    demo d1,d2,d3,d4;
    d1.print();
    d2.print();
    d3.print();
    d4.print();
    cout<<"\n Size of D1= "<<sizeof(d1);
    cout<<"\n Size of D2= "<<sizeof(d2);
    cout<<"\n Size of D3= "<<sizeof(d3);
    cout<<"\n Size of D4= "<<sizeof(d4);
}