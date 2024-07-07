#include<iostream>
using namespace std;
class oilcan{
    int ltr ,ml;
    public:
    oilcan(){
        ml=0;
        ltr=0;
    }
    void get(){
        cout<<"\n Enter thr volume:- ";
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
    int no,i;
    cout<<"\n Enter the number of containers:- ";
    cin>>no;
    oilcan o[no];
    oilcan t1;
    for (i=1;i<=no;i++){
        cout<<"\n Enter the amout of liquid in "<<i<<" container:- ";
        o[i].get();
        o[i+1]=o[i]+t1;
        t1 = o[i+1];
    }
    t1.put();
}