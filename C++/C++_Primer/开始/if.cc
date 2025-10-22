#include <iostream>
using namespace std;
int main() {
    int currVal = 0, Val = 0;
    if (cin >> currVal) {
        int cnt = 1;
        while (cin >> Val) {
            if (Val == currVal)
                ++cnt;
            else {
                cout << currVal << " occurs " << cnt << " times." << endl;
                currVal = Val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs "
             << cnt << " times" << endl;
    }
}

