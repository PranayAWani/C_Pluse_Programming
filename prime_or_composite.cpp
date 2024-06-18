#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"\n Enter a number:- ";
    cin>>a;
    int i,b,c=0;
    for(i=a;i>1;i--){
        b=a%i;
        if(b==0){
            c++;
        }
    }
    if(c>1){
        cout<<"\n Given number is a Composite number";
    }
    else {
        cout<<"\n Given number is a Prime number";
    }
}