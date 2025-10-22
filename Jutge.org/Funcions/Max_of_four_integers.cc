#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d){
    int max;
    max = a;
    if(b>a) max = b;
    if(c>max) max = c;
    if(d>max) max = d;
    return max;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max;
    max = max4(a, b, c, d);
    cout << max << endl;
}