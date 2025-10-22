#include <iostream>
using namespace std;

void func(int number, string str);

int main() {
    func(3, "我是一只傻傻鸟。");
}

void func(int number, string str) {
    cout << "亲爱的" << number << "号: " << str << endl;
    return;
}