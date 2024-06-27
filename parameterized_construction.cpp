#include<iostream>
using namespace std;
class employ{
    int id;
    string name;
    float sal;
    public:
    employ(){
        id= 101;
        name = "Pranay"; 
        sal = 23000;
    }
    employ(int i){
        id=i;
        name="Vibhor";
        sal=24000;
    }
    employ(int i, float s){
        id =i;
        name = "Aditi";
        sal =s;
    }
    // employ(float s, int i){
    //     id = i;
    //     name = "Shlok";
    //     sal =s;
    // }
    employ(int i, string n ,float s){
        id=i;
        name = n;
        sal =s;
    }
    void print(){
        cout<<"\n Employ id:- "<<id;
        cout<<"\n Employ name:- "<<name;
        cout<<"\n Employ salary:- "<<sal;
        cout<<"\n *************************";
    }
};
int main(){
    employ e1,e2(102),e3(103,25000),e4(105,"Akshata",27000);
    e1.print();
    e2.print();
    e3.print();
    e4.print();
    // e5.print();
}