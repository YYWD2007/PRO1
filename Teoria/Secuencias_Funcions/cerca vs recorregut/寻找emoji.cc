#include <iostream>
using namespace std;

// sequencia de caracters apareix un ":)" sequencia minim 2 elements
int main(){
    bool emoji = false;
    char c, uc; // uc es ultim caracter abans de c 
    cin >> uc >> c;
    while(!emoji && c!='.'){
        if(uc ==':' && c==')'){
            emoji = true;
        }
        uc = c;
        cin >> c;
    }
    cout << (emoji? "YES" : "NO") << endl;
}

/*
int main(){
    bool emoji = false;
    char c, uc; // uc es ultim caracter
    cin >> uc;
    while(!emoji && cin >> c){
        if(uc ==':' && c==')'){
            emoji = true;
        }
        uc = c;
    }
    cout << (emoji? "YES" : "NO") << endl;
}*/