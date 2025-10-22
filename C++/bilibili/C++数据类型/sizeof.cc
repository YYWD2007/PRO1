//用于求数据类型或变量占用的内存空间

#include <iostream>
using namespace std;
int main() {
    cout << "sizeof(int): "<< sizeof(int) << endl;
    cout << "sizeof(float): "<< sizeof(float) << endl;
    cout << "sizeof(double): "<< sizeof(double) << endl;
    cout << "sizeof(char): "<< sizeof(char) << endl;
    cout << "sizeof(bool): "<< sizeof(bool) << endl;

    int i;
    cout << "sizeof(int): "<< sizeof(i) << endl;
    cout << "sizeof(int): "<< sizeof i << endl;
}

