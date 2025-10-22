// Mitjana d'una seq amb N elements reals
#include <iostream>
using namespace std;
int main() {
    double suma = 0.0, x;
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> x;
        suma += x;
    }
    cout << suma/double(N) << endl;
}