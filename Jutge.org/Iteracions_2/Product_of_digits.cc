#include <iostream>
using namespace std;

bool number(long long &x){
    return bool (cin>>x);
}

long long mult_digits(long long x){
    long long i=1;
    if(x==0){
        i = 0;
    }
    while(x>0){
        i *= x%10;
        x /= 10;
    }
    return i;
}

int main(){
    long long x, a;
    while(number(x)){
        cout << "The product of the digits of "<< x;
        a = mult_digits(x);
        cout << " is " << a << "." << endl;
        if (a/10>0){
            cout << "The product of the digits of "<< a;
        }
        while(a/10>0){
            a = mult_digits(a);
            cout << " is " << a << "." << endl;
            if (a/10>0){
                cout << "The product of the digits of "<< a;
            }
        }
        cout << "----------" << endl;
    }
}