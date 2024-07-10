#include<iostream>
using namespace std;
class rect{
    int l,b;
    public:
    void get(){
        cout<<"\n Enter the length and breadth of the rectangle to calaculate its area:- ";
        cin>>l>>b;
    }
    operator int(){
        return(l*b);
    }
};
int main(){
    rect r1;
    int area;
    r1.get();
    area=r1;
    cout<<"\n Area= "<<area;
}