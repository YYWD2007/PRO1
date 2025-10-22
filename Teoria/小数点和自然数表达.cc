#include <iostream>
using namespace std;

void print(int x);

int main() {
    double x=21.150000;
    cout << x << endl;
    cout.precision(3); // 21.2 （只显示到有效小数位）
    cout << x << endl;

    cout.setf(ios::fixed); // 加这个可以显示所有的小数，甚至添加0
    cout.precision(6);  // 21.150000
    cout << x << endl;


    // 不管输入什么数字都只表达最后3位，如果不够三位就用0填充
    int y;
    cin >> y;
    int last3=y%1000;
    if(last3<10){
        cout << "00" << last3 << endl;
    } else if(last3<100){
        cout << "0" << last3 << endl;
    } else{
        cout << last3 << endl;
    }

    print3(y);
}

void print3(int x){
    if(x<10){
        cout << "00" << x << endl;
    } else if(x<100){
        cout << "0" << x << endl;
    } else{
        x = x%1000;
        cout << x << endl;
    }
}