#include <iostream>
using namespace std;

/*
N = 4
0 1 2 3 -1  Subsque1
4 5 8 9 10 -1 Subseq2
100 200 100 -1 Subseq3
-1 Subs4
*/

bool sequencia_creixent(){
    double x, ux=-1;
    while(cin>>x && x!=-1){
        if(ux>x && ux!=-1){
            return false;
        }
        ux = x;
    }
    return true;
}

bool totes_creixents(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        if(!sequencia_creixent()){
            return false;
        }
    }
    return true;
}

int main(){
    cout << (totes_creixents()? "Si": "No") << endl;
}