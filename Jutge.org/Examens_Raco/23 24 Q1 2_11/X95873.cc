#include <iostream>
using namespace std;

void guardar_sum(char in, char z, int& x, int& y){
    if(in==z) {x += y; y=0;};
}

void reset(char in, char z1, char z2, int& y){
    if(in==z1 || in==z2) y=0;
}

int main(){
    char x;
    int temp_a=0, temp_b=0;
    int result_a=0, result_b=0;
    while(cin>>x){
        if(x=='a') temp_a++;
        if(x=='b') temp_b++;
        guardar_sum(x, '?', result_a, temp_a);
        reset(x, '.', '!', temp_a);
        guardar_sum(x, '!', result_b, temp_b);
        reset(x, '.', '?', temp_b);
    }
    cout << result_a << " " << result_b << endl;
}