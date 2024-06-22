#include<iostream>
using namespace std;

class bill{
    private:
    void database{
        
    }
    public:
    void top(){
        cout<<"\n      Jamuna prasad Fruit Supply pvt. ltd";
        cout<<"\n             holesale only ";
        cout<<"\n***********************************************";
    }
    
    void bottom();
    void calculation{

    }
};
void bill::bottom() {
    int fno;
    cout << "\nEnter the number of types of fruits you want to buy:- ";
    cin >> fno;

    if (fno <= 0) {
        cout << "The number of types of fruits should be a positive integer." << endl;
        return;
    }

    string* fruits = new string[fno];
    cout << "Enter the names and quatntity of the fruits:" << endl;
    int i,j=fno;
    int quantity[j];
    for (i = 0; i < fno; ++i) {
        cout << "Fruit " << (i + 1) << ": ";
        cin >> fruits[i] >> quantity[i];
    }
    }
int main(){
    bill b;
    b.bottom();
    b.top();
    return 0;
}