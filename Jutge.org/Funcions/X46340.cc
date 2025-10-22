#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z){
    int max, min, sum;
    if(x>=y){
        max = x;
    } else max = y;
    if(z>=max){
        max = z;
    } else max = max;

    if(x<=y){
        min = x;
    } else min = y;
    if(z<=min){
        min = z;
    } else min = min;

    sum = max + min;
    return sum;
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int sum;
    sum = sum_min_max(x, y, z);
    cout << sum << endl;
}
