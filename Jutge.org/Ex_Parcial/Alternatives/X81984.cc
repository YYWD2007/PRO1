#include <iostream>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >>c;
    if((a+b)/2!=c && (a+c)/2!=b && (c+b)/2!=a){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
    }
}