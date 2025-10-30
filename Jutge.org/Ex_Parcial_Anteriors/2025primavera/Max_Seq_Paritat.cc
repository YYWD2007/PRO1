#include <iostream>
using namespace std;

void guardar(int& x, int& y){
    if(x!=0){
        if(x>y) y = x;
        x = 0;
    }
}

int main(){
    int n;
    int actual_parells=0, actual_senars=0;
    int final_parells=0, final_senars=0;
    while(cin>>n){
        if(n%2==0){
            actual_parells++;
            guardar(actual_senars, final_senars);
        } else{
            actual_senars++;
            guardar(actual_parells, final_parells);
        }
    }
    guardar(actual_senars, final_senars);
    guardar(actual_parells, final_parells);
    cout << "PARELL: " << final_parells << endl;
    cout << "SENAR: " << final_senars << endl;
}