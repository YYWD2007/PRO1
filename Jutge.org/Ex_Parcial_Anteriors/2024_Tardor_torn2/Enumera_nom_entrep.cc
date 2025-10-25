#include <iostream>
using namespace std;

void result(int x, int y, int n){
    cout << x;
    n -= 2;
    while(n>0){
        cout << y;
        n--;
    }
    cout << x << endl;
}

int main(){
    int n;
    cin >> n;
    for(int d=1; d<=9; d++){
        for(int e=0; e<=9; e++){
            if(d!=e){
                result(d, e, n);
            }
        }
    }
}