#include <iostream>
using namespace std;
int main(){
    string x;
    int i=0;
    while(cin >> x){
        if(x=="hello"){
            i++;
        }
    }
    cout << i << endl;
}