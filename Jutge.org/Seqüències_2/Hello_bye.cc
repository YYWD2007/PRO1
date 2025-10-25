#include <iostream>
using namespace std;

int main(){
    char h = ' ', o = ' ', l = ' ', a;
    bool trobat=false;
    while(!trobat && cin>>a && a!='.'){
        if(h=='h' && o=='o' && l=='l' && a=='a'){
            trobat = true;
        }
        h = o;
        o = l;
        l = a;
    }
    cout << (trobat?"hola":"adeu") << endl;
}