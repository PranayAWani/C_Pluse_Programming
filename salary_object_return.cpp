#include<iostream>
using namespace std;
class employ{
    int bsal,hra;
    public:
    void get(){
        cin>>bsal>>hra;
    }
    void put(){
        cout<<"\n"<<bsal<<"\t"<<hra;
    }
    friend employ add(employ ,employ );
};
employ add(employ x,employ y){
    employ temp;
    temp.bsal = x.bsal + y.bsal;
    temp.hra = x.hra + y.hra;
    return(temp);
}
int main(){
    employ e1,e2,e3;
    cout<<"\n Enter Basic salary and hra for the first employ :- ";
    e1.get();
    cout<<"\n Enter Basic salary and hra for the second employ :- ";
    e2.get();
    e3=add(e1,e2);
    e1.put();
    e2.put();
    e3.put();
}