#include<iostream>
using namespace std;
static int count;
class test{
    public:
    test(){
        count++;
        cout<<"\n Number of object created :- "<<count;
    }
    ~test(){
        cout<<"\n Number of object destroyed:- "<<count;
        count--;
    }
};
int main(){
    test t1,t2,t3,t4;
}