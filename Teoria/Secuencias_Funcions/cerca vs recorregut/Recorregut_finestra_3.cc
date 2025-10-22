#include <iostream>
using namespace std;

// Jutge.org/X64929
// Recorregut, finestre=3

int main(){
    char a=' ', b=' ', c;
    int felicitat=0, tristesa=0;
    while(cin>>c){
        if(b=='-' && ((a=='(' && c==':') || (a==':' && c==')'))){
            felicitat++;
        } else if(b=='-' && ((a==')' && c==':') || (a==':' && c=='('))){
            tristesa++;
        }
        a=b;
        b=c;
    }
    cout << felicitat << ' ' << tristesa << endl; 

}