#include <iostream>
using namespace std;

string poker_hand(char c1, char c2, char c3){
    string result;
    if(c1!=c2 && c2!=c3 && c1!=c3){
        result = "Totes les cartes diferents";
    } else if(c1=='A' && c2=='A' && c3=='A'){
        result = "Trio d'Asos!";
    } else if(c1==c2 && c2==c3){
        result = "Trio";
    } else{
        result = "Parella";
        }
    return result;
}

int main(){
    char a, b, c;
    cin >> a >> b >> c;
    string x = poker_hand(a, b, c);
    cout << x << endl;
}