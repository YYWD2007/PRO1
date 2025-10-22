#include <iostream>
using namespace std;
int main() {
    int a = 0b101;  // 5
    int b = -0b110010; // -50
    cout << a << "," << b << endl;

    int c = 0177777; // 8进制  65535
    cout << c << endl;

    int z = 0X2A; // 16进制  42
    cout << z << endl;
}