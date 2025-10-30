#include <iostream>
using namespace std;

int main(){
    char x;
    int result=0, y=1;
    while(cin>>x){
        if(x!='*'){
            result += y*int(x-'0');
            y *= 2;
        } else{
            cout << char(result);
            result=0;
            y=1;
        }
    }
    cout << endl;
}