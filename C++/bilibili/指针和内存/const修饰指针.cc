#include <iostream>
using namespace std;



int main(){
    int a = 10;
    int b = 10;
    const int *p = &a; // 常量指针，指向可以改(p=&b)，指针指向的值不能改(错误：*p = 20)
    int * const p = &a;  // 指针常量, 指向不可以改（错误：p=&b），数值可以改（*p = 20）
    const int * const p = &a; // 都不可以改

}