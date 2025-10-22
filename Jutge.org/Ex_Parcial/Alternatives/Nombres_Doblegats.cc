#include <iostream>
using namespace std;

bool llegeix_n(int& x){
    return bool(cin >> x);
}

int count_digits(int y){
    int i=0;
    if(y==0){
        i = 1;
    }
    while(y>0){
        y /= 10;
        i++;
    }
    return i;
}

int separate_impar_par1(int z, int n_digits){
    int n;
    int n_par1=0;
    n = n_digits/2;
    int h=1;
    if(n_digits==1) n_par1=z;
    else{
    while(n!=0){   
        n_par1 += (z%10)*h;
        z /= 10;
        h = h*10;
        n--;
    }}
    return n_par1;
}

int separate_par2(int z, int n_digits){
    int n;
    int n_par2=0;
    n = n_digits/2; 
    int p=10;
    while(n>=3){
        p = p*10;
        n--;
    }
    if(n_digits==2){n_par2 = z/10;} else{
    z = z/(p*10);
    n = n_digits/2;
    while(n>=0){
        n_par2 += (z%10)*p;
        p /= 10;
        z /= 10;
        n--;
    }}
    return n_par2;
}

int separate_impar2(int z, int n_digits){
    int n2;
    int n_impar2=0;
    n2 = (n_digits/2)+1;  
    int p=10;
    while(n2>=3){
        p = p*10;
        n2--;
    }
    z = z/p;
    n2 = (n_digits/2)+1;
    while(n2!=0){
        n_impar2 += (z%10)*p;
        p = p/10;
        z /= 10;
        n2--;
    }
return n_impar2;
}

int main() {
    int k;
    int result;
    while(llegeix_n(k)){
        int n_digits;
        n_digits = count_digits(k);
        int a, b;
        if (n_digits%2==0){
            a = separate_impar_par1(k, n_digits);
            b = separate_par2(k, n_digits);
            result = a+b;
        } else{
            a = separate_impar_par1(k, n_digits);
            b = separate_impar2(k, n_digits);
            result = a+b;
        }
        cout << k << " -> " << result << endl; 
    }
}