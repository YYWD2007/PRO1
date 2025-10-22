#include <iostream>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void rotate3(int& a, int& b, int& c){
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

void rotate4(int& a, int& b, int& c, int& d){
    int temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;
}

// Detectar si una seq de chars conte 'hola'
int main(){
    char c, uc=' ', uuc=' ', uuuc=' ';
    bool surt_hola = false;
    while(!surt_hola && cin >> c){
        if(uuuc=='h' && uuc=='o' && uc=='l' && c=='a'){
            surt_hola = true;
        }
        rotate4(uuuc, uuc, uc, c);
        /*
        uuuc = uuc;
        uuc = uc;
        uc = c;
        */
    }
    cout << (surt_hola? "YES": "NO") << endl;
}