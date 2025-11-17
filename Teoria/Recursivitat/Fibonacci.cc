#include <iostream>
using namespace std;

// 斐波那契数列是一个这样的数列：1, 1, 2, 3, 5, 8, 13, ... 其中，每个数字都是前两个数字的和。

int fibonacci(int n){    // n = 想要第几个斐波那契数, 它会返回一个整数 int（计算出的结果）。
    if(n<=2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    cout << fibonacci(7) << endl;
}