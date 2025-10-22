#include <iostream>
using namespace std;

void cifras(int x, int Base){
    int i=0;
    int k = x;
    while(x>0){
        x = x/Base;
        i ++;
    }
    cout << "Base " << Base << ": " << i << " cifras." << endl;
    if(Base<16) cifras(k, Base + 1);
    return;
}

int main() {
    long long x;
    cin >> x;
    cifras(x, 2);
}