#include <iostream>
using namespace std;

bool dos_iguals(int a, int b, int c, int d){
    int x[4] = {a, b, c, d};
    bool y = false;
    int l = 0;
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(x[i]==x[j]){
                return true;
            } else y=false; 
        }
    }
    return y;
}

int main(){
    int a, b, c, d;
    bool t;
    cin >> a >> b >> c >> d;
    t = dos_iguals(a,b,c,d);
}