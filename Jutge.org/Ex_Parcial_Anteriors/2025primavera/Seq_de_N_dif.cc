#include <iostream>
using namespace std;

void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int diferencia(int x, int y){
    if(x==0 && y==0) return 0;
    int result;
    result = x%10 - y%10;
    if(result<0) result*=-1;
    return result += diferencia(x/10, y/10);
}

int main(){
    int dif_ant, dif_ara, uux, ux, x;
    bool creixent=true;
    cin >> uux >> ux;
    dif_ant = diferencia(uux, ux);
    while(creixent && cin>>x){
        dif_ara = diferencia(ux, x);
        if(dif_ara<dif_ant) creixent=false;
        swap(ux, x);
        dif_ant = dif_ara;
    }
    cout << (creixent?"SI":"NO") << endl;
}