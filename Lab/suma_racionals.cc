#include <iostream>
using namespace std;

struct Racional {
    int num;
    int den;
};

Racional sumaR(Racional x, Racional y){
    Racional suma;
    suma.num = x.num * y.den + y.num * x.den;
    suma.den = x.den * y.den;
    return suma;
}

int mcd(int a, int b) {
    while(b != 0) {
        int temp = a%b;
        cout << a << " " << b << "- residu" << temp << endl;
        a = b;
        b = temp;
   }
   return a < 0 ? -a : a;
}


Racional simpR(Racional r) {
    if(r.den<0) {
        r.den = -r.den;
        r.num = -r.num;
    }
    int g = mcd(r.num, r.den);
    r.den = r.den/g;
    r.num = r.num/g;
    return r;
}

int main() {
    Racional r1, r2;
    cout << "Entra el primer racional (num den): ";
    cin >> r1.num >> r1.den;
    cout << "Entra el segon racional. (num den): ";
    cin >> r2.num >> r2.den;

    Racional suma = sumaR(r1, r2);

    suma = simpR(suma);


    cout << r1.num << "/" << r1.den << "+" << r2.num << "/" << r2.den << " = ";
    cout << suma.num << "/" << suma.den << endl;

    return 0;
}
