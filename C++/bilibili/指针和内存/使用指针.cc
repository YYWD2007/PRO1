#include <iostream>
using namespace std;

// 指针名表示的是地址


int main(){
    int a=3;
    int *p = &a;
    cout << "a = " << a << endl;
    cout << "a = " << *p << endl; // 解引用
    *p = 8;
    cout << "*p=" << *p << endl;

}