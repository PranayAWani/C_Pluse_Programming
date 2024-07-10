#include<iostream>
using namespace std;
class convert{
    char c;
    public:
    convert(){

    }
    convert(char t){
        c=t;
    }
    void put(){
        if(c>=65 && c<=90){
            c=c+32;
            cout<<"\n Lowercase = "<<c;
        }
        else{
            c=c-32;
            cout<<"\n Uppercase = "<<c;
        }
    }
};
int main(){
    convert cn1;
    char ch;
    cout<<"\n Enter a charcter value:- ";
    cin>>ch;
    cn1=ch;
    cn1.put();
}