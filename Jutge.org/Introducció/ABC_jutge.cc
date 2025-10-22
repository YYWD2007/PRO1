#include <iostream>
using namespace std;
int main() {
    int x, y, z, max, min, middle;
    char L, O, U;
    cin >> x >> y >> z >> L >> O >> U;
    if(x>y && y>z){
        max = x;
        min = z;
        middle=y;
    } else if(y>x && x>z) {
        max = y;
        min = z;
        middle = x;
    } else if(z>x && x>y){
        max = z;
        min = y;
        middle = x;
    } else if(x>z && z>y){
        max = x;
        min = y;
        middle=z;
    } else if(y>z && z>x) {
        max = y;
        min = x;
        middle = z;
    } else if(z>y && y>x){
        max = z;
        min = x;
        middle = y;
    }
    if(L=='C'){
        cout << max << " ";
    } else if (L=='B') {
        cout << middle << " ";
    } else if(L=='A') {
        cout << min << " ";
    }
    if(O=='C'){
        cout << max << " ";
    } else if (O=='B') {
        cout << middle << " ";
    } else if(O=='A') {
        cout << min << " ";
    }
    if(U=='C'){
        cout << max << endl;
    } else if (U=='B') {
        cout << middle << endl;
    } else if(U=='A') {
        cout << min << endl;
    }
}
