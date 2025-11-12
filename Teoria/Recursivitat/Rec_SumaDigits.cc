#include <iostream>
using namespace std;

int suma_digits_while(int n){
    int suma = 0;
    while(n>0){
        suma += n % 10;
        n = n / 10;
    }
    return suma;
}

int suma_digits_recursiu(int n){
    if(n<=0){
        return 0;
    }
    return (n%10) + suma_digits_recursiu(n/10);
}