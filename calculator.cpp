#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"\n 1 for Addition \t 2 for Substraction \n 3 for Multiplication \t 4 for Division";
    cout<<"\nEnter the number for which you want to perform the operation you want to perform:- ";
    cin>>a;
    cout<<"\nEnter the values for the operation:- ";
    cin>>b>>c;
    switch(a){
        case 1: cout<<"\n Addition of two numbers is = "<<b+c;
        break;
        case 2: cout<<"\n Substraction of two numbers is = "<<b-c;
        break;
        case 3: cout<<"\n Product of two numbers is = "<<b*c;
        break;
        case 4: cout<<"\n Quotient of numbers is = "<<b/c;
        break;
        default: cout<<"\n Entered value is not valid pls enter a valid number";
        break;

    }
}