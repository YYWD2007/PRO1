#include <iostream>
using namespace std;

bool is_sandwich(int n){
    int d, e;
    if(n/100<=0){
        return false;
    } else{
        d = n%10;
        e = (n/10)%10;
        n = n/100;
        if(d==e) return false;
        while(n>=10){
            if(n%10!=e) return false;
            n /= 10;
        }
        if(n==d) return true;
        else return false; 
    }
}

int main(){
    int x;
    cin >> x;
    bool result = is_sandwich(x);
    cout << (result?"true":"false") << endl;
}