#include<iostream>
using namespace std;
int main(){
    int p,c,m;
    float per;
    cout<<"Enter the marks of physics chemistry and maths";
    cin>>p,c,m;
    cout<<"Addition of all subjects is "<<p+c+m;
    cout<<"percentage of student"<<(float)(p+c+m)/3;
}