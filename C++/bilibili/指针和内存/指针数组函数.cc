#include <iostream>
using namespace std;

/*
 int*：传地址 → 需要自己解引用 *p
 int&：传变量本体 → 自动解引用，不需要 *

 指针参数 (int*) 和 引用参数 (int&) 的底层本质：都是“传地址，让你改原变量
*/

void bubbleSort(int *arr, int len){
    for(int i=0; i<len-1; i++){      // a[b] == *(a + b)
        for(int j=0; j<len-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int* arr, int len){
    for(int i=0; i<len; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[10] = {5,2,4,9,1,10,5,34,12,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, len); // 数组名就是首地址
    printArray(arr, len);
}