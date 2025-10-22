#include <iostream>
using namespace std;
int main() {
    int base, num;
    while(cin>>base>>num){
        int i=0;
        int r;
        r = num;
        while(r>0){
            r = r/base;
            i++;
        }
        cout << i << endl;
    }
}