#include <iostream>
using namespace std;

int main() {
    long long x, i=0;
    cin >> x;
    long long k = x;
    if(x==0){
        cout << "The number of digits of " << 0 << " is " << 1 << "." << endl;
    } else{
        while(x>0){
            x = x/10;
            i++;
        }
        cout << "The number of digits of " << k << " is " << i << "." << endl;
    } 
}