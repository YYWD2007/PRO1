// mitjana(real)d'una sequencia d'enters(sense sentinella)
#include <iostream>
using namespace std;
int main() {
    int x, suma=0, num_elems=0;
    while(cin >> x){
        suma += x;
        num_elems++;
    }
    cout << double(suma)/double(num_elems) << endl;
}