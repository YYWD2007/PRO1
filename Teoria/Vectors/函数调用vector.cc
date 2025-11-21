#include <iostream>
#include <vector>
using namespace std;

// & sempre, nomes lectura const

void f(vector<int> v){
    cout << v[0] << endl;
}

int main(){
    vector<int> w(32*1000*1000000);
    f(w);
}