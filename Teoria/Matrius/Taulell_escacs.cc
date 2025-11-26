#include <iostream>
#include <vector>
using namespace std;

void omplir_taulell_escacs(vector<vector<bool>>& M){
    const int F = M.size(), C = M[0].size();
    for(int i=0; i<F; i++){
        for(int j=i+1; j<C; j++){
            M[i][j] = (i+j)%2 == 0;
        }
    }
}

int main(){
    
}