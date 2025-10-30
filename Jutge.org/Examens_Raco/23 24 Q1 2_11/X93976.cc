#include <iostream>
using namespace std;

int reverse(int x){
    int result=0;
    while(x>0){
        result = result*10+(x%10);  
        x /= 10;
    }
    return result;
}

int result(int x){
    x = reverse(x);
    int result = 0, index=1;
    while(x>0){
        result += index*(x%10);
        x/=10;
        index++;
    }
    return result;
}

int main(){
    int n, r;
    while(cin>>n){
        r=result(n);
        cout << r << endl;
    }
}