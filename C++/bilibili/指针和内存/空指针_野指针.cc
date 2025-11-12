#include <iostream>
using namespace std;

// 空指针: 如果指针指向编号0就是空指针，用于给指针变量初始化
// 野指针 

int main(){
    int *p = NULL;   // 初始化
    // 0 到 255 之间的内存编号系统占用，不可以访问;

    int *s = (int *)0x1100; // 避免出现野指针，报错
}