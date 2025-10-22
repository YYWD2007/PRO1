#include <iostream>
using namespace std;

int main(){
    char digits[64];
    int base, x, i=0;
    cout << "Base: ";
    cin >> base;
    cout << "Number: ";
    cin >> x;
    if(x==0){
        cout << 0;
    }
    while(x>0){
        int digit = x%base;
        if (digit>=10){
            digits[i] = char(int('A') + digit-10);
        } else{
            digits[i] = char(int('0') + digit);
        }
        x /= base;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        cout << digits[j];
    }
    cout << endl;
}