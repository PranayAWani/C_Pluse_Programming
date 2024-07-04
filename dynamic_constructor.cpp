#include<iostream>
#include<string>
using namespace std;
class dynamic{
    char *p;
    public:
    dynamic(){
        p=new char[7];
        p="soft";
    }
    void print(){
        cout<<"\n Dynamic Memory Value:- "<<p;
    }
};
int main(){
    dynamic d1;
    d1.print();
}