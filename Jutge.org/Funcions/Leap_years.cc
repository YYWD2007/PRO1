#include <iostream>
using namespace std;

bool es_any_de_traspas(int any){
    bool traspas = false;
    if(any%4==0 && any%100!=0){
        traspas = true;
    } else if(any%400==0){
        traspas = true;
    }
    return traspas;
}

int main(){
    int any;
    cin >> any;
    bool traspas;
    traspas = es_any_de_traspas(any);
    cout << (traspas? "true" : "false") << endl;
}