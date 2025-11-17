#include <iostream>
using namespace std;

void show_reverse(int& n){
    string str;
    if(!(cin>>str)) return;
    else show_reverse(n);
    n -= 1;
    if(n>=0) cout << str << endl;
}

int main(){
    int n;
    cin >> n;
    show_reverse(n);
}