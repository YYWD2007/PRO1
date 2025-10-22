#include <iostream>
using namespace std;

void print(string x[], int len){
  cout << "欢迎你，" << x[len] << " 同学！你是 2025 UPC 新生，欢迎你加入！" << endl;
}

void function(){
    string i[5];
    while(cin>>i[0]){
    for (int a = 1; a < 5; a++) { // 输入：I am
        cin >> i[a];
    }
    print(i, 2);
    }
}

int main() {
    function();
}
