#include <iostream>
using namespace std;

int exp_2(int n){
    int result=2;
    if(n==0) return 1;
    while(n>1){
        result *= 2;
        n--;
    }
    return result;
}

int main(){
    char x;
    int result=0, exp=0;
    while(cin>>x){
        if(x!='*'){
            result += int(x-'0') * exp_2(exp);
            exp++;
        } else{
            cout << char(result);
            exp = 0;
            result = 0;
        }
    }
    cout << endl;
}