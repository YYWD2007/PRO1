#include <iostream>
using namespace std;

void countdown(int n){
    cout << n << endl;
    if(n > 0){
        countdown(n - 1);
    }
}

void countdown2(int n){
    cout << n << endl;
    if(n==0){                // case base
        return;
    }
    countdown2(n - 1);
}

int main(){
    int num;
    cin >> num;
    countdown(num);
}