#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 2, 5, 4};
    int longitd = sizeof(arr)/sizeof(int);
    int j=0;
    int reverse_arr[longitd];
    for(int i=longitd-1; i>=0; i--){
        reverse_arr[j] = arr[i];
        j++;
    }
    for(int i=0; i<longitd; i++){
        cout << reverse_arr[i] << endl;
    }

    // 进阶
    int start = 0;
    int end = (sizeof(arr)/sizeof(int)) - 1; // 末尾元素下标
    int temp = end;
    while(start<end){
        int temp2 = arr[start];
        arr[start] = arr[end];
        arr[end] = temp2;
        start ++;
        end --;
    }
    for(int i=0; i<=temp; i++){
        cout << arr[i] << endl;
    }
}