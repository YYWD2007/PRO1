#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if(x<y) {
        while(x<=y) {
            cout << y << endl;
            y--;
        }
    } else if(x>y) {
        while(x>=y) {
            cout << x << endl;
            x--;
        }
    } else {
        cout << x << endl;
    }
}

