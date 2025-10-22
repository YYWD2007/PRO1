#include <iostream>
using namespace std;
int main() {
    int a1, b1, a2, b2, c, d;
    cin >> a1 >> b1 >> a2 >> b2;
    if(b1==a2) {
        cout << "[" << a2 << "," << a2 << "]" << endl;
    } else if(a2<b1 && b2>b1 && a2>a1) {
        cout << "[" << a2 << "," << b1 << "]" << endl;
    } else if(a2<a1 && b1==b2) {
        cout << "[" << a1 << "," << b1 << "]" << endl;
    } else if(a2<a1 && b2>b1) {
        cout << "[" << a1 << "," << b1 << "]" << endl;
    } else if(a2<a1 && b2<b1 && b2>a1) {
        cout << "[" << a1 << "," << b2 << "]" << endl;
    } else if(a1==b2) {
        cout << "[" << b2 << "," << b2 << "]" << endl;
    } else if(a1==a2 && b1==b2) {
        cout << "[" << a1 << "," << b2 << "]" << endl;
    } else if(a1==a2 && b2>b1) {
        cout << "[" << a1 << "," << b1 << "]" << endl;
    } else if(a1==a2 && b2<b1) {
        cout << "[" << a1 << "," << b2 << "]" << endl;
    } else if(a2>a1 && b2==b1) {
        cout << "[" << a2 << "," << b2 << "]" << endl;
    } else if(a2>a1 && b2<b1) {
        cout << "[" << a2 << "," << b2 << "]" << endl;
    } else {
        cout << "[]" << endl;
    }
}


