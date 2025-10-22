#include <iostream>
using namespace std;
int main() {
    char y;
    int count=0;
    cin >> y;
    while (y != '.') {
        if(y=='a') count++;
        cin >> y;
    }
    cout << count << endl;

}