#include <iostream>
using namespace std;

int main(){
    int arr[5];  // 第一种定义方法
    arr[0] = 10; //赋值
    cout << arr[0] << endl; // 访问

    int arr2[5] = {10, 20, 30, 40, 50};  // 第二种定义方式， 如果初始没写够5个，系统自动添加0.
    for(int i=0; i<5; i++){             // 利用循环输出数组元素
        cout << arr2[i] << endl;
    }

    int arr3[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};    // 第三种定义方法
    // int arr4[]; 错误
}