#include <iostream>
#include <vector>
using namespace std;

// rotor noon

bool es_palindrom(const string& s){
    for(int i=0; i<s.size()/2; i++){
        if(s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}
