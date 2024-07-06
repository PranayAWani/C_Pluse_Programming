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
    }
};
int main(){
    movie i1,i2,t1,b1;
    
}