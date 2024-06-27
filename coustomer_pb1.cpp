#include<iostream>
using namespace std;
class customer{
    int number;
    string name;
    float cridet=0;
    public:
    void get(){
        cout<<"\n Enter Customer number name :- ";
        cin>>number>>name;
    }
    void put(){
        cout<<"\n"<<number<<"\t"<<name<<"\t"<<cridet;
    }
    void fun();
};
void customer::fun(){
    float object;
    int i;
    char check;
    for( i=0;check =='y';i++){
        cout<<"\n"<<i<<" add the amount of this entry:- ";
        cin>>object;
        cridet=cridet+object;
        cout<<"\n Do you want to add one more entry:- ";
        cin>>check;
    }
}
int main(){
    customer c1;
    c1.get();
    fun();
}