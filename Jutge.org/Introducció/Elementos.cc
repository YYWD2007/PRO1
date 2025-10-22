#include <iostream>
using namespace std;
int main () {
    char x, y;
    cin >> x >> y;
    if(x==y) {
        cout << "-" << endl;
    } else if(x=='A' && y=='P' or x=='P' && y=='V' 
              or x=='V' && y=='A') {
                cout << "1" << endl;
    } else{
        cout << "2" << endl;
    }
}