#include <iostream>
#include <vector>
using namespace std;

int maxim_element(const vector<vector<int>>& M){
    const int F = M.size(), C = M[0].size();  // Pre: Totes les files tenen el mateix tamany
    int maxim = M[0][0];
    for(int i=0; i<F; i++){
        for(int j=0; j<C; j++){
            maxim = max(maxim, M[i][j]);
        }
    }
    return maxim;
}

int main(){
    
}