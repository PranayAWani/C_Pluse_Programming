#include<iostream>
using namespace std;
class demo{
    int data,data1;
    public:
    demo(){
        random(data);
    }
    void get(){
        cout<<"\n guess the number:- ";
        cin>>data1;
    }
    void put(){
        if(data==data1){
            cout<<"\n your guess is right you won the game";
        }
        else{
            cout<<"\n you lose better luck next time";
        }
    }
};
int main(){
    demo d1;
    d1.get();
    d1.put();
}