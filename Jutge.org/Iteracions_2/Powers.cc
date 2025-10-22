#include <iostream>
using namespace std;
int main(){
    int a, b;
    while(cin >> a >> b){
        int i=1;
        long long result=1;
        if(b==0){
            result = 1;
        }
        while(i<=b){
            result = result*a;
            i++;
        }
        cout << result << endl;
    }
}

