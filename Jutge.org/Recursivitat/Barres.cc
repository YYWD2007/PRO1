#include <iostream>
using namespace std;

int p2(int n);
void print_asteriscos_linia(int n);
void print_asteriscos(int n);

int main(){
    int x;
    cin >> x;
    print_asteriscos(x);
}

int p2(int n){
    if(n==0) return 1;
    return 2*p2(n-1);
}

void print_asteriscos_linia(int n){
    if(n==0) {cout << endl; return;}
    cout << "*";
    print_asteriscos_linia(n-1);
}

void print_asteriscos(int n){
    if(n==1) {cout << "*" << endl; return;}
    print_asteriscos(n-1);
    print_asteriscos_linia(n);
    print_asteriscos(n-1);
}

