#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char esperat = 'a', c;
    int llargada_actual=0;
    int resultat=0;
    while(cin>>c){
        if(c==esperat){
            llargada_actual++;
            if(c=='b'){
                resultat += llargada_actual/2 >= n? 1:0;
                esperat='a';
            } else{
                esperat='b';
            }
        } else {
            llargada_actual = c=='a'?1:0;
            esperat=c=='a'?'b':'a';
        }
    }
    cout << resultat << endl;
}