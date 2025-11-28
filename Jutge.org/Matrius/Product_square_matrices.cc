#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b){
    int N = a.size();           
    Matriu r(N, vector<int>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return r;
}

int main(){

}