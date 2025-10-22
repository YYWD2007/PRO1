#include <iostream>
using namespace std;

char a_majuscules(char c){
    if(c>='a' && c<='z'){
        c=char(int(c)-32); // int-int
    }
    return c;
}

int main() {
    // passar una sequencia de chars a majuscules.
    char c;
    cin >> c;
    while(c!='.') {
        cout << a_majuscules(c); // processa
        cin >> c;
    }
    cout << endl;
}