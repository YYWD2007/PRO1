#include <iostream>
using namespace std;

// 在全部函数外面定义的是全局变量
// 在函数和语句块内部定义的是局部变量
// 函数的参数是该函数的局部变量
// 局部变量和全局变量可以重名，在局部内加::可以调用全局变量（func2）

// 函数内部用static修饰的是静态局部变量（function3）
// 用static修饰的局部变量生命周期和程序相同，并且只会被初始化一次


int a; // 全局变量，全部函数都可以访问
void function1();
void function2();
void function3 ();

int main() {
    a = 10;
    function1(); // 10
    function2(); // 11
    cout << "main a= " << a << endl; // 12

    function3();
    function3();
    function3();
}

void function1() {
    int x = 19; // 局部变量
    // x++; 打印的是20， 如果把++写在下面，打印的是19,然后加一
    cout << "x= " << x << endl;
    cout << "func1 a= " << a++ << endl; // 先打印a，再加一
}

void function2() {
    if(true) {
        int a=70;
        cout << ::a << endl;
    }
    cout << "func2 a= " << a++ << endl;
}

void function3() {
    static int l=20;
    int s=20;
    cout << "s= " << s++ << endl;
    cout << "l= " << l++ << endl;
}