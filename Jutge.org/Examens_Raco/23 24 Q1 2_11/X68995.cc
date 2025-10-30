#include <iostream>
using namespace std;

bool sum_2_iguals(int x, int y, int z, int k){
    if(x+y==z+k || x+z==y+k || x+k==y+z){
        return true;
    }
    return false;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool result = sum_2_iguals(a, b, c, d);
    cout << (result?"YES":"NO") << endl;
}