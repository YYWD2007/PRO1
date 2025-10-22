#include "tools.h" // 包含自定义的头文件用双引号
#include "girls.h"

int main() {
    cout << "max(5,8)= " << max(5,8) << endl;
    cout << "min(5,8)= " << min(5,8) << endl;
    print(3, "你赢得了奖品");
}

// 要编译所有的文件： g++ -o main main.cc tools.cpp girls.cpp
