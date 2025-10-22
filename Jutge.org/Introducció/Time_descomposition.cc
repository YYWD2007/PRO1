#include <iostream>
using namespace std;
int main() {
    int n, h, m, s, y, y2;
    cin >> n;
    h = n/3600;
    y = n%3600;
    m = y/60;
    y2 = y%60;
    s = y2;
    cout << h << " " << m << " " << s << endl;
}