#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> matriu;

// fer el esquema_dibuix de multiplicacio de matriu
void multiplica_matriu(const matriu& A, const matriu& B){
    const int F = A.size(), C = B[0].size();  // 结果的大小
    const int K = B.size(); // K = B的行，A的列
    matriu Result(F, vector<int>(C, 0));
    for(int i=0; i<F; i++){
        for(int j=i+1; j<C; j++){
            for(int k=0; k<K; k++){
                Result[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}

int main(){
    
    
}