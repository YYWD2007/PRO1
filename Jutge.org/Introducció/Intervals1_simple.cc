#include <iostream>
using namespace std;
int main() {
    int a1, b1, a2, b2, c, d;
    cin >> a1 >> b1 >> a2 >> b2;
    if(a2>a1) {
        c = a2;
    } else {
        c = a1;
    } 
    if (b2>b1) {
        d = b1;
    } else {
        d = b2;
    }
    if(a2>b1 or b2<a1) {
        cout << "[]" << endl;
    } else {
        cout << "[" << c << "," << d << "]" << endl;
    }
}