#include <iostream>
using namespace std;
int main() {
    /* Determinar si una sequencia esta ordenada 
       Numero conegut d'elements*/
    bool ordenada = true; // presumpcio optimista
    int elem, N, ultim_elem;
    cin >> N; // ens diuen el numero d'elements
    if(N>0) {
        cin >> elem;
        ultim_elem=elem; // cin >> ultim_elem
        int i = 1;
        while (i<N) {
            cin >> elem;
            if(ultim_elem>elem) {
                ordenada=false;
            }
            ultim_elem=elem;
            i++;
        }
        cout << (ordenada? "si" : "no") << endl;
    }
}