#include <iostream>
using namespace std;

void result(char x, int count){
    if(count==2) cout << "Parella de " << x << "s" << endl;
    if(count==3) cout << "Trio de " << x << "s" << endl;
    if(count==4) cout << "Poker de " << x << "s" << endl;
    if(count>4) cout << count << " " << x << "s!" << endl;
}

int main(){
    char x, pre;
    int count=1;
    cin >> x;
    if(x=='.'){
        return 0;
    }
    pre = x;
    while(x!='.' && cin>>x){
        if(pre==x){
            count++;
        } else{
            if(count>1){
                result(pre, count);
                count = 1;
            }
        }
        pre = x;
    }
}