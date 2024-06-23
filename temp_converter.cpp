#include<iostream>
using namespace std;
class convertor{
    public:
    void degkel(float &temp){
        cout<<"\n "<<temp<<" Degree Celcius = "<<(float)temp+273.15<<" Kelvin";
    }
    void keldeg(float &temp){
        cout<<"\n "<<temp<<" Kelvin = "<<(float)temp-273.15<<" Degree Celcius";
    }
    void degFar(float &temp){
        cout<<"\n "<<temp<<" Degree Celcius = "<<(float)(5/9)*(temp-32)<<" Farhenite ";
    }
    void fardeg(float &temp){
        cout<<"\n "<<temp<<" Farhenite = "<<(float)(5/9)*(temp-273.15)<<" Degree Celcius";
    }
    void kelFar(float &temp){
        cout<<"\n "<<temp<<" Kelvin = "<<(float)(9/5)*(temp-273.15)+32<<" Farhenite ";
    }
    void Farkel(float &temp){
        cout<<"\n "<<temp<<" Farhenite = "<<(float)(5/9)*(temp-32)+273.15<<" Kelvin ";
    }
    
};


int main(){
    
    convertor c1;
    int no;
    float temp;
    cout<<"\n 1 for degree to kelvin conversion \t 2 for kelvin to degree conversion \n 3 for degree to Farhenite conversion \t 4 for Farhenite to degree conversion \n 5 for Kelvin to Farhentie conversion \t 6 for Farhentie to kelvin conversion";
    checkup:
    cout<<"\n Enter the number dedicated to the operation you want to perform:- ";
    cin>>no;
    cout<<"\n Enter the tempreture to convert it:- ";
    cin>>temp;
    
    switch(no){
        case 1:  {c1.degkel(temp);break;}
        case 2:  {c1.keldeg(temp);break;}
        case 3:  {c1.degFar(temp);break;}
        case 4:  {c1.fardeg(temp);break;}
        case 5:  {c1.kelFar(temp);break;}
        case 6:  {c1.Farkel(temp);break;}
    }
    char check='u';
    cout<<"\n Do you want to check once again";
    cin>>check;
    if (check == 'Y'||'y'){
        goto checkup;
    }
    else{
        cout<<"\n Thankyou";
    }
}