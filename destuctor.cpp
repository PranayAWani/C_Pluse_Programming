#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"\n Constructor is executed";
    }
    ~demo(){
        cout<<"\n Destructor is executed";
    }
};
// int main(){
//     demo d1;
// }
int main(){
    demo d1,d2,d3,d4;
}