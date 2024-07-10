#include<iostream>
using namespace std;
class demo{
    int b;
    public:
    demo(){
        b=20;
    }
    int ret(){
        return(b);
    }
};
class chemmo{
    int c;
    public:
    chemmo(){
        c=90;
    }
    chemmo(demo d3){
        c=d3.ret();
    }
    void print(){
        cout<<"\n"<<c;
    }
};
int main(){
    chemmo c1;
    demo d1;
    c1.print();
    c1=d1;
    c1.print();
}