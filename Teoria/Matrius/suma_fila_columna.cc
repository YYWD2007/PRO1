#include <iostream>
#include <vector>
using namespace std;

int suma_fila(const vector<vector<int>>& M, int f){
    int suma = 0;
    const int C = M[0].size();
    for(int j=0; j<C; j++){
        suma += M[f][j];
    }
    return suma;
}

int suma_columna(const vector<vector<int>>& M, int c){
    int suma = 0;
    const int F = M[0].size();
    for(int i=0; i<F; i++){
        suma += M[i][c];
    }
    return suma;
}

int main(){

}