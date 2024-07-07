#include<iostream>
using namespace std;
class oilcan{
    int ltr,ml;
    public:
    void get(){
        cout<<"\n Enter the volume filled in liters and ml:- ";
        cin>>ltr>>ml;
    }
    void put(){
        cout<<"\n"<<ltr<<"\t"<<ml;
    }
    oilcan operator +(oilcan m){
        oilcan temp;
        temp.ml=ml+m.ml;
        temp.ltr=ltr+m.ltr+temp.ml/1000;
        temp.ml=temp.ml%1000;
        return(temp);
    }
};
int main(){
    oilcan o1,o2,o3;
    cout<<"\n For oilcan 1:- ";
    o1.get();
    cout<<"\n For oilcan 2:- ";
    o2.get();
    o3=o1+o2;
    cout<<"\n Liters \t ml";
    o1.put();
    o2.put();
    cout<<"\n ******************";
    o3.put();
}