#include <iostream>
using namespace std;

/* 指针变量（指针）：存放变量在内存中的起始地址
   不管什么类型的变量，它们的地址都是一个16进制的数字
   整形指针存放整形变量的地址，字符型...
   指针也是变量
   在64位操作系统中，指针占用的内存都是8字节，不管什么类型
   32 位4字节

   指针需要知道变量占用多少内存，所以，声明指针的时候，也需要用数据类型关键字
*/

int main(){
    int a;
    char b;
    bool c;
    int *pa=&a; // 让指针pa指向变量a,pa的基类型是int
    char *pb=&b;
    bool *pc=&c;

    cout << "变量a的地址是: " << (long long)&b << endl; 
    // (类型) 变量 - 强制转换， & 查询变量储存地址
    cout << "变量a的地址是: " << (long long)pb << endl;
    cout << sizeof(pb) << endl; // 指针变量都是8个字节（64位操作系统）
}

