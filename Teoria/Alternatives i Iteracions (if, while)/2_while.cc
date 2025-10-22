#include <iostream>
using namespace std;
int main() {
    // 1- while
    int vegades = 0;
    while (vegades < 500) {
        cout << "hola" << endl;
        vegades += 1; // vegades = vegades + 1, vegades++
    }



    // 2- while(输出：1,2,3...,n（用户输入的数字）)
    int i=0, n;
    cin >> n;
    while(i<n) {
        cout << i + 1 << endl;
        i++;
    }

    int i2=1, n2;
    cin >> n2;
    while(i2<=n2) {
        cout << i2 << endl;
        i2++;
    }
    
    // !!!
    int i3=1, n3;
    cin >> n3;
    while(i3!=n3) {
        cout << i3 << endl;
        i3++;
    }
}