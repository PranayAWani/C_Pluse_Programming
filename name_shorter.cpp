#include<iostream>
#include<cstring>
using namespace std;
class shortt{
    public:
    string name;
    int no,a,b;
    void get(){
        cout<<"\nEnter the name id:- ";
        cin>>name;
        cout<<"\nEnter the length you want in your id:- ";
        cin>>no;
        // cout<<name<<no;
    }
    void shorter();
    void cal(){
        a=name.length();
        if(a<=no){
            cout<<"\n Your entered id is less than your maximum limit:- "<<name;
        }
        else{
            shorter();
        }
    }
};
void shortt::shorter(){
    if(no==2){
        cout<<"\n Your shorted id is:- "<<name[0]<<name.back();
    }
    else-if(no==3){
        cout<<"\n Your shorted id is:- "<<name[0]<<name[a/2]<<name.back();
    }
    else-if(no==4){
        cout<<"\n Your shorted id is:- "<<name[0]<<name[a/2]<<name.back();
    }
}
int main(){
    shortt s1;
    s1.get();
    s1.cal();
}