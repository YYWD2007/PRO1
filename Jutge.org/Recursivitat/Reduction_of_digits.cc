#include <iostream>
using namespace std;

int suma_digits(int x);

int reduccio_digits(int x){
    int temp = suma_digits(x);
    if(temp<10) return temp;
    return reduccio_digits(temp);
}

int suma_digits(int x){
    if(x<=0) return 0;
    return x%10 + suma_digits(x/10);
}

