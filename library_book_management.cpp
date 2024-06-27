 #include<iostream>
using namespace std;
class database{
        int StudentDetails() {
        map<int rno,string name> stu = {
            //staff will add student details and student can see it when he enters the number;
        };
};
class student{
    int rno;
    string name;
    int b_num;
    void get(){
        cout<<"\n Enter Students roll no. and name:- ";
        cin>>rno;
    }
    void put(){
        cout<<"\n Library Card number:- "<<rno;
        cout<<"\n Student name:- "<<name;
        cout<<"\n Number of books recived:- "<<b_num;
    }
};
class staff{

};
int main(){
     database;
    
    string person;
    cout<<"\n Are you Staff or Student :- ";
    cin>>person;
    if(person=="Student"|| person=="student"){
        int number;
        cout<<"\n Enter your assigned three digit Roll no. to get your info:- ";
        cin>>number;
    }
    staff:
    else if(person=="Staff"|| person=="staff"){
        int check;
        cout<<"\n 1 for adding the name of student \t 2 for removing the name of student\n 3 for issuing the book to the student \t 4 for adding a new book to the library";
        cout<<"\n Enter the number dedicated to the function you want to perform:- ";
        cin>>check;
        case(check){
            switch 1:{
                break;
            }
            switch 2:{
                break;
            }
            switch 3:{
                break;
            }
            switch 4:{
                break;
            }
            default{
                cout<<"\nEnter a valid number";
                goto staff();
            }
        }
    }
}