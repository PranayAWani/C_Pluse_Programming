#include<iostream>
using namespace std;
class oilcan{
    int ltr,ml;
    public:
    void get(){
        cout<<"\n Volume of oilcan:- ";
        cin>>ltr>>ml;
    }
    void put(){
        cout<<"\n Total volume of oilcan is = "<<ltr<<" liters "<<ml<<" ml";
    }
    friend oilcan add(oilcan ,oilcan);
};
oilcan add(oilcan o1,oilcan o2){
    oilcan temp;
    temp.ml=o1.ml+o2.ml;
    temp.ltr=o1.ltr+o2.ltr+temp.ml/1000;
    temp.ml=temp.ml%1000;
    return temp;
}
int main(){
    oilcan o1,o2,o3;
    cout<<"\n Enter the volume of First oilcan :- ";
    o1.get();
    cout<<"\n Enter the volume of Second oilcan :- ";
    o2.get();
    o3=add(o1,o2);
    o1.put();
    o2.put();
    o3.put();
}