#include <iostream>
using namespace std;

// calcula el % de nombres que tenen la xifra 7

bool te_cifra(int x, int d){
    bool trobat = false;
    while(!trobat && x>0){
        if(x%10==d){
            trobat = true;
        }
        x /= 10;
    }
    return trobat;
}

int main(){
    int n;
    int count=0, total=0;
    while(cin >> n){
        if(te_cifra(n, 7)){
            count ++;
        }
        total++;
    }
    cout << double(count)/double(total) * 100.0 << "%" << endl;
}
