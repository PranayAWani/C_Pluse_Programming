#include<iostream>
using namespace std;
class prime{
    int no,count;
    public:
    prime(){
        count=1;
    }
    void get(){
        cout<<"\n Enter the number to check weather prime or composite:- ";
        cin>>no;
    }
    void operator ++();
};
void prime::operator ++(){
for(int i=2;i<no;i++){
        if(no%i==0){
            count++;
        }          
    }
    if(count==2){
            cout<<"\n Given number is composite";
        }
        else {
            cout<<"\n Given number is prime";
        }
}
int main(){
    prime p1;
    p1.get();
    ++p1;
}