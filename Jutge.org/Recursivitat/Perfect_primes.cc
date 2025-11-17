#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

bool es_primer(int x, int sqrt_x);
int suma_digits(int x);

/*
 *@pre n és un número natural (n≥0).
 *@pos retorna true si n és un primer perfecte, sinó retorna false. 
 *Direm que n és un primer perfecte si la seqüència infinita formada per n, s(n), s(s(n)), …només conté nombres primers.
 *Sigui s(n) la suma dels dígits de n.
*/
bool es_primer_perfecte(int n){
    assert(n>=0);
    if(n<10){
        return es_primer(n, sqrt(n));
    }
    if(!es_primer(n, sqrt(n))) return false;
    return es_primer_perfecte(suma_digits(n));
}

int main(){
    int x;
    cin >> x;
    cout << (es_primer_perfecte(x)? "true": "false") << endl;
}

bool es_primer(int x, int sqrt_x){
    if(x==0 || x==1) return false;
    for(int i=2; i<=sqrt_x; i++){
        if(x%i==0) return false;
    }
    return true;
}

int suma_digits(int x){
    if(x<=0) return 0;
    return x%10 + suma_digits(x/10);
}