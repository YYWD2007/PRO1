#include <iostream>
using namespace std;

// 函数声明必须在调用前面

int max(int a, int b); // 函数声明， 在main前面
// 写一个函数，给它一个字符串，打印（没有返回值）返回类型添加void, return 后面空
void print(string str);
// 函数，打印乘法表，没有参数，没有返回值
void printmt();

int main() 
{   
    //调用函数
    printmt();
    cout << "max(5,8)=" << max(5,8) << endl;
    print("字符串");
}

int max(int a, int b) {  // 函数定义，在main后面（可以一起...）
    int c;
    if(a>b){
        c=a;
    } else{
        c=b;
    }
    return c;
}

void print(string str){
    cout << str << endl;
    return;
}

void printmt() {
    for(int i=1;i<=9;i++){
        for (int j=1;j<=i;j++) {
            cout << i << "*" << j << "=" << i*j << " ";
        }
    cout << endl;
    }
    return;
}
