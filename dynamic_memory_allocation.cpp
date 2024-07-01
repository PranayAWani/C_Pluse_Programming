#include<iostream>
#include<string>
using namespace std;
class dynamic{
    string *p;
    public:
    dynamic(){
        p=new string;
        p= "soft";
    }
    void print(){
        cout<<"\n Dynamic memory Value:- "<<p;
    }
};
int main(){
    dynamic d1;
    d1.print();
}