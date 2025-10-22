#include <iostream>
using namespace std;
int main () {
    int n;
    double x=1, y=0;
    cin >> n;
    while(x<=n) {
        y = y + (1/x);
        x += 1;
    }
    printf("%.4f\n", y);
}