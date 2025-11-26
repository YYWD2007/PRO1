#include <iostream>
#include <vector>
using namespace std;

int suma_subseq_matriu(const vector<vector<int>>& M, int i, int j, int di, int dj){
    int suma = 0, F = M.size(), C = M[0].size();
    while(0<=i && i<F && 0<=j && j<C){
        suma += M[i][j];
        i += di;
        j += dj;
    }
    return suma;
}

int main(){

}