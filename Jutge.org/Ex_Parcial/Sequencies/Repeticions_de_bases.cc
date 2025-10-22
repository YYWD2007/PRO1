#include <iostream>
using namespace std;

struct Genoma{
    int longitud;
    int pos;
    char Ch;
};

void print(Genoma a, Genoma c, Genoma g, Genoma t){
    cout << "\"A\" = " << a.longitud;
    if(a.longitud!=0) cout << "(" << a.pos << ")";
    cout << ", ";
    cout << "\"C\" = " << c.longitud;
    if(c.longitud!=0) cout << "(" << c.pos << ")";
    cout << ", ";
    cout << "\"G\" = " << g.longitud;
    if(g.longitud!=0) cout << "(" << g.pos << ")";
    cout << ", ";
    cout << "\"T\" = " << t.longitud;
    if(t.longitud!=0) cout << "(" << t.pos << ")";
    cout << endl;
}

void guardar(Genoma& actual, Genoma& a, Genoma& c, Genoma& g, Genoma& t){
    if(actual.Ch=='A'){
        if(actual.longitud>a.longitud){
            a=actual;
        }
    }
    if(actual.Ch=='C'){
        if(actual.longitud>c.longitud){
            c=actual;
        }
    }
    if(actual.Ch=='G'){
        if(actual.longitud>g.longitud){
            g=actual;
        }
    }
    if(actual.Ch=='T'){
        if(actual.longitud>t.longitud){
            t=actual;
        }
    }
}

void reset(Genoma& a, Genoma& b, Genoma& c, Genoma& d){
    a = {0, 0, 'A'};
    b = {0, 0, 'C'};
    c = {0, 0, 'G'};
    d = {0, 0, 'T'};
}

int main(){
    Genoma actual = {0, 0, 'N'};
    Genoma A = {0, 0, 'A'};
    Genoma C = {0, 0, 'C'};
    Genoma G = {0, 0, 'G'};
    Genoma T = {0, 0, 'T'};
    char x;
    int index=1;
    cin>>x;
    char pre;
    
    if(x=='.') {print(A,C,G,T); cin>>x; pre=x; actual={1, index, x};guardar(actual,A,C,G,T);}
    else {pre = x; actual={1, index, x}; guardar(actual,A,C,G,T);}
    while(cin>>x){
        index++;
        if(x=='.'){
            print(A,C,G,T); cin>>x; index=1; pre=x; actual={1, index, x};reset(A,C,G,T);guardar(actual,A,C,G,T);
        } else{
            if(x==pre) {actual.longitud++; pre=x; guardar(actual,A,C,G,T);}
            else {guardar(actual,A,C,G,T); actual={1,index,x};pre=x;guardar(actual,A,C,G,T);}
        }
    }
}