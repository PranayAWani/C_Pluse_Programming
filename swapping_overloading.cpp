#include <iostream>
#include <string>
using namespace std;

class Swapping {
public:
    void swap(int a, int b) {
        cout << "\n Before Swapping \t A = " << a << "\t B = " << b;
        int c = a;
        a = b;
        b = c;
        cout << "\n After Swapping \t A = " << a << "\t B = " << b;
        cout << "\n************************************";
    }

    void swap(float a, float b) {
        cout << "\n Before Swapping \t A = " << a << "\t B = " << b;
        float c = a;
        a = b;
        b = c;
        cout << "\n After Swapping \t A = " << a << "\t B = " << b;
        cout << "\n************************************";
    }
    void swap(string a, string b) {
        cout << "\n Before Swapping \t A = " << a << "\t B = " << b;
        string c = a;
        a = b;
        b = c;
        cout << "\n After Swapping \t A = " << a << "\t B = " << b;
        cout << "\n************************************";
    }
};

int main() {
    Swapping sp1;
    int i1, i2;
    float f1, f2;
    string s1, s2;

    cout << "\n Enter two int Values: ";
    cin >> i1 >> i2;
    cout << "\n Enter two float Values: ";
    cin >> f1 >> f2;
    cout << "\n Enter two string Values: ";
    cin >> s1 >> s2;

    sp1.swap(i1, i2);
    sp1.swap(f1, f2);
    sp1.swap(s1, s2);

    return 0;
}
