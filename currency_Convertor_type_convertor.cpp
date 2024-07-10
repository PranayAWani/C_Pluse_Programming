#include<iostream>
using namespace std;
class america{
    int doller;
    public:
    void get(){
        cout<<"\n Enter your salary in dollers:- ";
        cin>>doller;
    }
    int get_doller(){
        return(doller*83);
    }
};
class india{
    int rs;
    public:
    void get(){
        cout<<"\n Enter your salary in Rupees:- ";
        cin>>rs;
    }
    india operator +(america a){
        india temp;
        temp.rs=rs+a.get_doller();
        return(temp);
    }
    void print(){
        cout<<"\n Total rupees:-"<<rs;
    }
};
int main(){
    america a1,a2;
    india i1,i2;
    i1.get();
    a1.get();
    i1=i1+a1;
    i1.print();
}