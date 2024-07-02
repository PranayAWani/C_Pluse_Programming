#include<iostream>
#include<string>
using namespace std;
class dynamic{
    char *p;
    public:
    dynamic(){
        p=new char;
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