#include <iostream>
using namespace std;

struct Rational {
    int num, den;
};

Rational rational(int n, int d){
    Rational f;
    int mcd=1;
    f.num = n;
    f.den = d;
    int nu = n, de = d;
    if(de<0){
        de=-de;
        nu=-nu;
    
    } 
    if(nu==0){
        de=1;
    } else {
        while(f.den!=0){
            int temp;
            temp = f.num%f.den;
            f.num = f.den;
            f.den = temp;
            mcd = f.num;
        }
    }
    if(mcd<0){
        mcd = -mcd;
    }
    f.num = nu;
    f.den= de;
    f.num /= mcd;
    f.den /= mcd; 
    
    return f;
}


