#include <iostream>
using namespace std;

int make_bicolor(int x, int y, int rep1, int rep2){
    int temp=1;
    int result = 0;
    for(int i=1; i<=rep2; i++){
        result += y*temp;
        temp *= 10;
    }
    for(int j=1; j<=rep1; j++){
        result += x*temp;
        temp *= 10;
    }
    return result;
}

int main(){
    int N;
    cin >> N;
    for(int i=1; i<=9; i++){
        for(int j=0; j<=9; j++){
            if(i!=j){
                for(int rep=1; rep<N; rep++){
                    cout << make_bicolor(i, j, rep, N-rep) << endl;
                }
            }
        }
    }
}