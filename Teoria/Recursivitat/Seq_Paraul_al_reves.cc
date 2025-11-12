#include <iostream>
using namespace std;

void show_reverse(){
    string paraula;
    if(!(cin >> paraula)){
        return;
    }
    show_reverse();
    cout << paraula << " ";
}

int main(){
    show_reverse();
    cout << endl;
}