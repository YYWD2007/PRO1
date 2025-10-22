#include <iostream>
using namespace std;

bool llegeix(string& name, int& N ){
    string a, b, c, d, e, f, g, h;
    return bool(cin >> a >> b >> c >> name >> d >> e 
                >> f >> N >> g >> h);
}

int main(){
    string name;
    int N;
    while(llegeix(name, N)){
        int M=0;
        M = N - (N/10);
        cout << name << ", you look younger. I thought you were " 
        << M << " years old." << endl;
    }
}
