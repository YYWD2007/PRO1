#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if(x==0){
        cout << 0 << endl;
    } else {
        while(x>0){
            cout << x%2;
            x = x/2;      
        } 
        cout << endl;
    } 
}
