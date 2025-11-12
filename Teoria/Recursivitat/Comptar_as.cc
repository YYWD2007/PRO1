#include <iostream>
using namespace std;

int comptar_as(){
    char c;
    cin >> c;
    if(c=='.'){
        return 0;
    }
    int a = c == 'a' ? 1:0;
    return a + comptar_as();
}

int main(){
    comptar_as();
}