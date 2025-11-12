#include <iostream>
using namespace std;

char post_increment(char& c, int d){
    char res = c;
    c += d;
    return res;
}

string rep(char c, int n, int d){
    string res = "";
    for(int i = 0; i < n; i++){
        res += post_increment(c, d);
    }
    return res;
}

string funny_word(int x){
    return rep('a', x, 1) + rep('z', x, -1);
}

int main(){
    int n;
    cin >> n;
    cout << funny_word(n) << endl;
}