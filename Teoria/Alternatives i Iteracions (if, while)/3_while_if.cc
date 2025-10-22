#include <iostream>
using namespace std;
int main() {
    // 1.1- Potencial(潜在)divisor de N (while)
    int N, d;
    cin >> N;
    d = 2;
    while(d<N) {
        if(N%d == 0) {
            cout << d << ' ';
        }
        d++;
    }
    cout << endl;



    // 1.2- Verificar si N2 és primer o no
    int N2, d2=2;
    cin >> N2;
    bool he_vist_un_divisor = false;
    while(d2<N2) {
        if(N2%d2 == 0) {
            he_vist_un_divisor = true; 
        }
        d2++;
    }
    /*
    *规则：if 会检查括号里的表达式是不是 true
    *如果是 true → 执行 {} 内的代码
    *如果是 false → 跳过 {} 内的代码，执行 else（如果有的话）
    */
    if (he_vist_un_divisor){
        cout << "No es primer!" << endl;
    } else {
        cout << "Es primer!" << endl;  //nombre primer（质数）
    } // !!!注意：0 和 1 不是质数，这里的代码没有关于这个条件的



    // 1.3- Verificar si N3 és primer o no
    int N3, d3=2;
    cin >> N3;
    bool es_primer = true;
    while(es_primer && d3<N3){
        if (N3%d3==0){
            es_primer = false;
        } else {
            d3++;
        }
    }
    if (es_primer) {
        cout << "Es primer!" << endl;
    } else {
        cout << "No es primer!" << endl;
    }
}