#include <iostream>
#include <vector>
using namespace std;

int main(){
    int F=0, C=0; // F=files(i) C=Columnes(j)
    vector<vector<int>> M(F, vector<int>(C,0)); // vector<int>(C,0): Valor inicial de cada fila

    // typedef(Definicions de tipus);
    // typedef int Enter;
    typedef vector<double> Fila;
    typedef vector<Fila> Matriu;
    Matriu M1(7, Fila(5, -1.0));

    // Llegir una matriu
    cin >> F >> C;
    Matriu M2(F, Fila(C,0));
    for(int i=0; i<F; i++){
        for(int j=0; j<C; j++){
            cin >> M2[i][j];
        }
    }
}