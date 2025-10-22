#include <iostream>
using namespace std;

int main() {
    // Determinar si algun element pertany[-2000, -1000]
    bool lhe_vist=false;
    int elem;
    cin >> elem;
    while(elem != 0 && !lhe_vist) {  // 0 : sentinella - Te el tipus dels elements. No pertany a la sequencia.
        if(elem>=-2000 && elem<= -1000){
            lhe_vist=true;
        }
        cin >> elem;
    }
    if(lhe_vist){
        cout << "si" << endl;
    } else{
        cout << "no" << endl;
    }
}