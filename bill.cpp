// #include<iostream>
// using namespace std;

// class bill{
//     public:
//     // int database(){
//     //     if (fruits==apple){return(100);}
//     //     else if(fruits==banana){return(48);}
//     //     else if(fruits==grapes){return(50);}
//     //     else if(fruits==orange){return(40);}
//     //     else if(fruits==mango){return(150);}
//     //     else if(fruits==lichi){return(300);}
//     //     else if(fruits==jamun){return(400);}
//     //     else if(fruits==pomogranet){return(200);}
//     //     else if(fruits==watermelon){return(60);}
//     //     else if(fruits==melon){return(60);}
//     //     else if(fruits==papaya){return(40);}
//     //     else if(fruits==pinapple){return(70);}
//     //     else if(fruits==kiwi){return(160);}
//     //     else if(fruits==Strawberry){return(250);}
//     //     else if(fruits==berry){return(350);}
//     //     else {return(cout<<"\n This fruit is not available")}
//     // }
//     int getFruitPrice(const string& fruit) {
//         map<string, int> fruitPrices = {
//             {"apple", 100}, {"banana", 48}, {"grapes", 50}, {"orange", 40},
//             {"mango", 150}, {"lichi", 300}, {"jamun", 400}, {"pomegranate", 200},
//             {"watermelon", 60}, {"melon", 60}, {"papaya", 40}, {"pineapple", 70},
//             {"kiwi", 160}, {"strawberry", 250}, {"berry", 350}
//         };

//         if (fruitPrices.find(fruit) != fruitPrices.end()) {
//             return fruitPrices[fruit];
//         } else {
//             cout << "\n This fruit is not available" << endl;
//             return -1;
//         }
//     }
    
//     void top(){
//         cout<<"\n      Jamuna prasad Fruit Supply pvt. ltd";
//         cout<<"\n             holesale only ";
//         cout<<"\n***********************************************";
//     }
    
//     void bottom();
    
// };
// void bill::bottom() {
//     int fno;
//     cout << "\nEnter the number of types of fruits you want to buy:- ";
//     cin >> fno;

//     if (fno <= 0) {
//         cout << "The number of types of fruits should be a positive integer." << endl;
//         return;
//     }

//     string* fruits = new string[fno];
//     cout << "Enter the names and quatntity of the fruits:" << endl;
//     int i,j=fno;
//     int quantity[j];
//     for (i = 0; i < fno; ++i) {
//         cout << "Fruit " << (i + 1) << ": ";
//         cin >> fruits[i] >> quantity[i];
//     }
//         cout<<"\nfruits name"<<"\t"<<quantity;
//     for(i=0;i<fno;++i){
//         cout<<fruits[i]<<"\t"<<quantity[i];
//     }
//     }
// int main(){
    
//     bill b;
    
//     b.bottom();
//     b.top();

//     return 0;
// }
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

class Bill {
public:
    int getFruitPrice(const string& fruit) {
        map<string, int> fruitPrices = {
            {"apple", 100}, {"banana", 48}, {"grapes", 50}, {"orange", 40}, {"mango", 150}, {"lichi", 300}, {"jamun", 400}, {"pomegranate", 200}, {"watermelon", 60}, {"melon", 60}, {"papaya", 40}, {"pineapple", 70},{"kiwi", 160}, {"strawberry", 250}, {"berry", 350},{"sweet_lime",40}
        };
        if (fruitPrices.find(fruit) != fruitPrices.end()) {
            return fruitPrices[fruit];
        } else {
            cout << "\n This fruit is not available" << endl;
            return -1;
        }
    }
    void bottom();
};

void Bill::bottom() {
    int fno;
        cout << "\nEnter the number of types of fruits you want to buy: ";
        cin >> fno;

    if (fno <= 0) {
        cout << "The number of types of fruits should be a positive integer." << endl;
        return;
    }
string* fruits = new string[fno];
int* quantities = new int[fno];
        cout << "\nEnter the names and quantities of the fruits:- ";
    for (int i = 0; i < fno; ++i) {
        cout << "Fruit " << (i + 1) << ": ";
        cin >> fruits[i] >> quantities[i];
    }
    cout << "\n      Pranay Wani Fruit Supply Pvt. Ltd";
    cout << "\n             Wholesale only";
    cout << "\n***********************************************";
    cout << "\nSr no.\tFruits Name\t\tQuantity(kg/dz)\tPrice(per kg/dz)\tTotal";
    int totalCost = 0;
    for (int i = 0; i < fno; ++i) {
        int price = getFruitPrice(fruits[i]);
        if (price != -1) {
            int cost = price * quantities[i];
            totalCost += cost;
            cout <<"\n"<<i<<"\t"<< fruits[i] << "\t\t" << quantities[i] << "\t\t" << price << "\t" << cost ;
        }
    }
    cout << "\nTotal cost: " << totalCost << endl;
    cout << "\n***********************************************";
}

int main() {
    Bill b;
    b.bottom();
    return 0;
}
