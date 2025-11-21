#include <iostream>
#include <vector>
using namespace std;

struct Racional{
    int num, den;
};

bool llegeix_racionals(Racional x){
    char barra;
    return bool(cin>>x.num>>barra>>x.den);
}

int main(){
    vector<Racional> vr;
    Racional r;
    while(llegeix_racionals(r)){
        vr.push_back(r);
    }
    for(int i=vr.size()-1; i>=0; i--){
        cout << vr[i].num << "/" << vr[i].den << endl;
    }
}