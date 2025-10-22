#include <iostream>
#include <cmath>
using namespace std;

int square(int x);
int square_root(int x);

int main() {
    int a;
    while(cin>>a){
        cout << square(a) << " " << square_root();
    }
}

int square(int x) {
    x = x*x;
    return x;
}

int square_root(int x) {
    x = sqrt(x);
    return x;
}

