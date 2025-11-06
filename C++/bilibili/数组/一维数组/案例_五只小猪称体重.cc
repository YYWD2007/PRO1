// 在一个数组中记录五只小猪体重，打印最重的小猪的体重

#include <iostream>
using namespace std;

int main (){
    int 体重[5];
    cin >> 体重[0];
    int max=体重[0];
    for(int i=1; i<5; i++){
        cin >> 体重[i];
        if(体重[i]>max) max = 体重[i];
    }
    cout << "最重的小猪的体重是：" << max << "kg" << endl;
}