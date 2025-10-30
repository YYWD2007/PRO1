#include <iostream>
using namespace std; 

struct Enter{
    int n, ndigits;
};

int reverse (Enter e){
    int r=0;
    for (int i=0;i<e.ndigits;i++){
        r=10*r+e.n%10;
        e.n/=10;
    }
    return r;
}

Enter suma_digits_mod10(int a, int b){
    Enter resultat={0,0};
    while(a>0 or b>0){
        resultat.n=10*resultat.n+(a%10+b%10)%10;
        resultat.ndigits++;
        a/=10;
        b/=10;
    }
    return resultat;
}

int main(){
    int a,b;
    while(cin>>a>>b){
        cout<<reverse(suma_digits_mod10(a,b))<<endl;
    }
}