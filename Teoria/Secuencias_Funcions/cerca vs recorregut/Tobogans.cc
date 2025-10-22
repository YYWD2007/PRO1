// jutge x44801
#include <iostream>
using namespace std;

struct Tobogan{
    int longitud, pendent, pos;
};

int main(){
    Tobogan actual = {-1, 0, 0}; // no hi ha tobogan, long = -1
    Tobogan creixent = {-1, 0, 0};
    Tobogan decreixent = {-1, 0, 0};
    int index = 0;
    int d = 0, ud = 0;
    int n, un;
    cin >> un;
    index++;
    while(cin >> n){
        index++;
        ud = d;
        d = n - un;
        if(d==ud && d!=0){
            if(actual.longitud==-1){
                actual.pos = index - 2;
                actual.longitud = 3;
                actual.pendent = d;
            } else{
                actual.longitud++;
            }
        // 看看是否要保存
        } else if(actual.longitud!=-1){
                if(actual.pendent>0){
                    if(actual.longitud>creixent.longitud){
                        creixent = actual;
                    }
                } else{
                    if(actual.longitud > decreixent.longitud){
                        decreixent = actual;
                    }
                }
                actual.longitud = -1;
        }
        un = n;
        }
        if(actual.longitud != -1){
            if(actual.pendent>0){
                if(actual.longitud>creixent.longitud) creixent = actual;
            } else {
                if(actual.longitud>decreixent.longitud) decreixent = actual;
            }
        }

        if(creixent.longitud!=-1 && decreixent.longitud==-1){
            cout << "/ " << creixent.pos << ":" << creixent.pendent << ":" << creixent.longitud << endl;
        } else if(decreixent.longitud!=-1 && creixent.longitud==-1){
            cout << "\\ " << decreixent.pos << ":" << decreixent.pendent << ":" << decreixent.longitud << endl;
        } else if (decreixent.longitud!=-1 && creixent.longitud!=-1){
            cout << "/ " << creixent.pos << ":" << creixent.pendent << ":" << creixent.longitud << endl;
            cout << "\\ " << decreixent.pos << ":" << decreixent.pendent << ":" << decreixent.longitud << endl;
        } 
} 