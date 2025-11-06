#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sizeof(arr) << endl; // 输出40字节，一个int 4字节byte 32bits 4x10=40
    cout << sizeof(arr[0]) << endl; // 4
    cout << sizeof(arr)/sizeof(int) << endl;  //数组元素个数, 10

    cout << arr << endl; // 数组首地址
    cout << &arr[0] << endl; // 数组首地址 0x...60
    cout << &arr[1] << endl; // 差四个字节 0x...64
}