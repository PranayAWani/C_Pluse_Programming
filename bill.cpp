#include<iostream>
using namespace std;

class bill{
    public:
    void top{
        cout<<"\n      Jamuna prasad Fruit Supply pvt. ltd";
        cout<<"\n             holesale only ";
        cout<<"\n ************************************************";
    }
    void bottom{
        int fno;
        char fruites[fno][10];
        cout<<"\n Enter the number of types of fruites you want to buy:- ";
        cin>>fno;
        for(int i=0;i<fno;i++){
            cin<<fruites[i];
        }
    }
};
int main(){
    bill b;
    b.bottom();
    b.top();
    return 0;
}