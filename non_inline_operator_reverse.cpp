#include<iostream>
using namespace std;
class reverse{
    int no, rev,rem;
    public:
    reverse(){
        rev=0;
    }
    void get(){
        cout<<"\n Enter number:- ";
        cin>>no;
    }
    void put(){
        cout<<"\n Reverse of the number:- "<<rev;
    }
    void operator ~();
};
void reverse::operator ~(){
    while(no>0){
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
}
int main(){
    reverse r1;
    r1.get();
    ~r1;
    r1.put();
}