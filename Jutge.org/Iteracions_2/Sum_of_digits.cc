#include <iostream>
using namespace std;
int main() {
    int x;
    while(cin>>x){
        int y=0;
        cout << "The sum of the digits of " << x << " is ";
        while(x>=1){
            y += x%10;
            x = x/10;
        }
        cout << y << "." << endl;
    }
}