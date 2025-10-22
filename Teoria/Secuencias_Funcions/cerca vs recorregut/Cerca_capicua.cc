#include <iostream>
using namespace std;

// X65175
// sense sentinella / finestra1 / cerca(recorregut)

bool es_capicua(int n){
    int nrev=0, n_xifres=0;
    for(int k=n; k>0; k/=10){
        nrev = nrev*10 + k%10;
        n_xifres++;
    }
    return n_xifres>=3 && n==nrev;
}

int main(){
    bool algun_capicua=false;
    int n;
    while(!algun_capicua && cin>>n){
        algun_capicua = es_capicua(n);
    }
    if(algun_capicua){
        cout << n << "!" << endl;
    } else{
        cout << "Res." << endl;
    }
}