#include<iostream>
#include<string>
using namespace std;
class shortt{
    public:
    string name,realname;
    int no;
    void get(){
        cout<<"\nEnter the name id:- ";
        cin>>name;
        cout<<"\nEnter the length you want in your id:- ";
        cin>>no;
    }
    void shorter();
    void cal(){
        if(sizeof(name)<=no){
            cout<<"\n Your entered id is less than your maximum limit:- "<<name;
        }
        else{
            shorter();
        }
    }
};
void shortt::shorter(){
    if(no==2){
        cout<<"\n Your shorted id id:- "<<name[0];
        int i;
        i=sizeof(name)-1;
        cout<<name[i];
    }
    else{
        cout<<"\n Work under process";
    }
}
int main(){
    shortt s1;
    s1.get();
    s1.cal();
}