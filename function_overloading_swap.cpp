#include<iostream>
using namespace std;
class demo{
    int z;
    float c;
    public:
    void sum(int x,int y){
        z=x+y;
        cout<<"\n Add of two numbers is "<<z;
    }
    void sum(float a,float b){
        c=a+b;
        cout<<"\n Add of two float is "<<c;
    }
};
int main(){
    demo d1;
    int i1,i2;
    float f1,f2;
    cout<<"\n Enter two int numbers:- ";
    cin>>i1>>i2;
    cout<<"\n Enter two float numbers:- ";
    cin>>f1>>f2;
    d1.sum(i1,i2);
    d1.sum(f1,f2);
}