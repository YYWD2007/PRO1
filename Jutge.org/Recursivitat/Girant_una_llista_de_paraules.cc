#include <iostream>
using namespace std;

void show_reverse(){
    string str;
    cin >> str;
    if(str=="fi") return;
    show_reverse();
    cout << str << endl;
}

int main(){
    show_reverse();
}