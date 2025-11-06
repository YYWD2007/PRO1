#include <iostream>
using namespace std;

/*
 * 利用冒泡实现升序排列
 * 比较相邻的元素，如果第一个比第二个大，就交换。（第一个和第二个比较，第二个和第三个...）
 * 一轮结束后，数组最后一个数字是最大的
 * 对比次数 - 1
 * 第二轮，第二个最大数在倒数第二的位置
 * 对比次数 - 1
 * 第三轮 ... 结束。
 * 总结：排序的总轮数等于元素个数-1 每轮对比次数=元素个数-排序轮数-1 或者每轮对比次数都-1
*/

int main(){
    int arr[9] = {4,2,8,0,5,7,1,3,9};
    int comp1 = 8;
    for(int i=0; i<9-1; i++){ // 总轮数
        for(int j=0; j<=comp1; j++){ // 或者j<9-i-1
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        comp1--;
    }
    for(int i=0; i<9; i++){
        cout << arr[i] << endl;
    }
}