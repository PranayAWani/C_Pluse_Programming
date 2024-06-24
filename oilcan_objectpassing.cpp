#include<iostream>
using namespace std;
class oilcan{
    int ltr,ml;
    public:
    void get(){
        cout<<"\n Enter the vlolume of the can in Liters and mililiters:- ";
        cin>>ltr>>ml;
    }
    void add(oilcan x, oilcan y){
        ml=x.ml+y.ml;
        ltr=x.ltr+y.ltr+ml/1000;
        ml=ml%1000;
    }
    void put(){
        cout<<"\n "<<ltr<<"\t"<<ml;
    }
};
int main(){
    oilcan o1,o2,o3;
    o1.get();
    o2.get();
    o3.add(o1,o2);
    o1.put();
    o2.put();
    o3.put();
    
}