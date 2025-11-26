#include <iostream>
#include <vector>
using namespace std;

// Pre: Matriu quadrada; Rec_Plantilla_2)
void transposa(vector<vector<int>>& M){
    const int N = M.size();
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            swap(M[i][j], M[j][i]);
        }
    }
}

int main(){
    
}