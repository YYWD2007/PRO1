#include <iostream>
using namespace std;

int to_number(char x){
    int result=0;
    if(x=='A'){
        result = 14;
    } else if(x=='J'){
        result = 11;
    } else if(x=='Q'){
        result = 12;
    } else if(x=='K'){
        result = 13;
    } else if(x=='0'){
        result = 10;
    } else{
        result = int(x) - int('0');
    }
    return result;
}

bool better_card(char a, char b){
    int x, y;
    x = to_number(a);
    y = to_number(b);
    if(x>y){
        return true;
    } else return false;
}

int main(){
    char a, b;
    cin >> a >> b;
    bool result = better_card(a, b);
    cout << (result? "true": "false");
}