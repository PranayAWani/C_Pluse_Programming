#include<iostream>
using namespace std;
class movie{
    int hrs,min,sec;
    public:
    void get(){
        cout<<"\n Enter timings in hrs min sec format:- ";
        cin>>hrs>>min>>sec;
    }
    void put(){
        cout<<"\n"<<hrs<<"\t"<<min<<"\t"<<sec;
    }
    movie operator +(movie m){
        movie temp;
        temp.sec=sec+m.sec;
        temp.min=min+m.min+temp.sec/60;
        temp.sec=temp.sec%60;
        temp.hrs=hrs+temp.hrs+temp.min/60;
        temp.min=temp.min%60;        
        return (temp);
    }
};
int main(){
    movie i1,i2,i3,t1,b1;
    cout<<"\n Enter timings of 1st interval:- ";
    i1.get();
    cout<<"\n Enter timings of 2nd interval:- ";
    i2.get();
    i3=i1+i2;
    cout<<"\n Enter timings of Break:- ";
    b1.get();
    t1=b1+i3;
    cout<<"\n Hrs \t Min \t Sec";
    i1.put();
    i2.put();
    i3.put();
    b1.put();
    cout<<"\n ******************************";
    t1.put();

}