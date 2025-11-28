#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b){
    int F = a.size(), C = b[0].size();
    int K = a[0].size();
    Matrix r(F, vector<int>(C));
    for(int i=0; i<F; i++){
        for(int j=0; j<C; j++){
            for(int k=0; k<K; k++){
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return r;
}