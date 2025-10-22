#include <iostream>
using namespace std;

bool numbers(int &x){
    return bool(cin >> x);
}

int num_to_base_sum(int base, int x){
    int total=0;
    while(x>0){
        total += x%base;
        x /= base;
    }
    return total;
}

int main() {
    int base, x, result;
    cin >> base;
    while(numbers(x)){
        cout << x << ": ";
        result = num_to_base_sum(base, x);
        cout << result << endl;
    }
}