#include <iostream>
using namespace std;

int main(){
    char a, b, c, d;
    a = ' ';
    b = ' ';
    c = ' ';
    bool found=false;
    cin >> d;
    while(d!='.' && not found){
        found = {a=='h' && b=='o' && c=='l' && d=='a'};
        a = b;
        b = c;
        c = d;
        cin >> d;
    }
    cout << (found ? "Yes" : "No") << endl;
}