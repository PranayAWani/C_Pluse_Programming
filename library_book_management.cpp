#include<iostream>
using namespace std;
int main(){
    string person;
    cout<<"\n Are you Staff or Student";
    cin>>person;
    if(person=="Student"|| person=="student"){
        cout<<"\n Enter your assigned three digit Roll no. to get your info:- ";
    }
    else if(person=="Staff"|| person=="staff"){
        cout<<"\n 1 for adding the name of student \t 2 for removing the name of student\n 3 for issuing the book to the student \t 4 for adding a new book to the library";
        cout<<"\n Enter the number dedicated to the function you want to perform:- ";

    }
}