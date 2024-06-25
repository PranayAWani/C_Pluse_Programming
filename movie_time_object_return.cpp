#include<iostream>
using namespace std;
class movie{
    int hrs,min,sec;
    public:
    void get(){
        cout<<"\n Enter the timings in hrs min sec ";
        cin>>hrs>>min>>sec;
    }
    void put(){
        cout<<"\n"<<hrs<<"\t"<<min<<"\t"<<sec;
    }
    friend movie add(movie ,movie);
};
movie add(movie t1,movie t2){
    movie temp;
    temp.sec=(t1.sec+t2.sec)%60;
    temp.min=(t1.min+t2.min+(t1.sec+t2.sec)/60)%60;
    temp.hrs=t1.hrs+t2.hrs+(t1.min+t2.min)/60;
    return temp;
}
int main(){
    movie t1,t2,t3;
    cout<<"\n Enter the timing for first interval:- ";
    t1.get();
    cout<<"\n Enter the timing for second interval:- ";
    t2.get();
    t3=add(t1,t2);
    t1.put();
    t2.put();
    t3.put();
}