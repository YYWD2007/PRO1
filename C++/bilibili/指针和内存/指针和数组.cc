#include <iostream>
using namespace std;

int main(){
    // 利用指针访问数组中的元素
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int *p = arr;
    cout << *p << endl;
    p++; // 移了四个字节
    cout << *p << endl;

    int *p2 = arr;
    for(int i=0; i<10; i++){
        cout << *p2 << endl;
        p2++;
    }

}