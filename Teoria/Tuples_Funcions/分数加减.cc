#include <iostream>
using namespace std;

// sumar sequencia de racionals sense sentinella

struct Racional {
    int num, den;
};

bool llegeix_racional(Racional&x){    // Racional&x：引用传参，修改原变量
    char barra;
    return bool(cin >> x.num >> barra >> x.den);
    // cin >> ... 一边读取，一边检测是否出错；return true or false.
    // 3/5，3 / 5，3 换行 / 换行 5 ...都可以正确读取.
}

Racional suma_racionals(Racional a, Racional b){
    Racional resultat= {
    .num = a.num * b.den + b.num * a.den,
    .den = a.den * b.den
    };
    return resultat;
}

int mcd(Racional s){
    int mcd, temp;
    while(s.den!=0){
        temp = s.num%s.den;
        s.num = s.den;
        s.den = temp;
    }
    mcd = s.num;
    return mcd < 0 ? -mcd : mcd;
}

int main() {
    Racional r, suma = {0, 1}; // 初始0, 开始加所有输入的分数
    while(llegeix_racional(r)){
        suma = suma_racionals(suma, r);
        // suma = suma + r
    }
    int m = mcd(suma);
    suma.num /= m;
    suma.den /= m;
    if (suma.den<0){
        suma.num = -suma.num;
        suma.den = -suma.den;
    }
    cout << suma.num << "/" << suma.den << endl;

}