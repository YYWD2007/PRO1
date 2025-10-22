#include <iostream>
using namespace std;
int main() {
    int a1, b1, a2, b2, c, d;
    cin >> a1 >> b1 >> a2 >> b2;
    c = max(a1, a2);
    d = min(b1, b2);
    if(a1==a2 && b1==b2) {
        cout << "=" << " , ";
    } else if(a1>=a2 && b1<=b2) {
        cout << "1" << " , ";
    } else if(a1<=a2 && b1>=b2) {
        cout << "2" << " , ";
    } else {
        cout << "?" << " , ";
    }
    if(a1<a2 && b1<a2) {
        cout << "[]" << endl;
    } else if(a2<a1 && b2<a1) {
        cout << "[]" << endl;
    } else {
        cout << "[" << c << "," << d << "]" << endl;
    }
}