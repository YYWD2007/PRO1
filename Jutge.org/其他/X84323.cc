#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin>>a>>b){
        int result=0, temp=0, p=1;
        while(a>0 || b>0){
            temp=(a%10+b%10)%10;
            result += temp*p;
            p *= 10;
            a/=10;
            b/=10;
        }
        cout << result << endl;
    }
}