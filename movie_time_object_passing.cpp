#include<iostream>
using namespace std;
class movie{
    int hrs,min,sec;
    public:
    void get(){
        cout<<"\n Enter the timings HH:MM:SS Format:- ";
        cin>>hrs>>min>>sec;
    }
    void add(movie x,movie y){
        sec=x.sec+y.sec;
        min=x.min+y.min+sec/60;
        sec=sec%60;
        hrs=x.hrs+y.hrs+min/60;
        min=min%60;
    }
    void put(){
        cout<<"\n" <<hrs <<"\t" << min <<"\t"<<sec; 
    }
};
int main(){
    movie t1,t2,t3;
    cout<<"\n Enter the value for the first half of the movies:- ";
    t1.get();
    cout<<"\n Enter the value for the second half of the movies:- ";
    t2.get();
    t3.add(t1,t2);
    cout<<"\n Hrs \t Min \t Sec";
    t1.put();
    t2.put();
    t3.put();
}