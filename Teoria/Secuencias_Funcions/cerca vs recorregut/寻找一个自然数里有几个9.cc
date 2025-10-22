#include <iostream>
using namespace std;

// donat un natural mirar si alguna de les seves es un 9.
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
    bool trobat;
    cin >> n;
    trobat = te_cifra(n, 9);
    cout << (trobat? "YES": "NO") << endl;
}
