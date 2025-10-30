#include <iostream>
using namespace std;

void print_parte_derecha(int& s, int w){
    int temp = s;
    while(s>0){
        cout << ' ';
        s--;
    }
    s = temp;
    s++;
    while(w>0){
        cout << '*';
        w--;
    }
    cout << endl;
}

void print_parte_izq(int& s, int w){
    int temp = s;
    while(s>0){
        cout << ' ';
        s--;
    }
    s = temp;
    s--;
    while(w>0){
        cout << '*';
        w--;
    }
    cout << endl;
}

int main(){
    int lines, width, segment;
    int cond1=0, cond2=0;
    while(cin>>lines>>width>>segment){
        int s=0; 
        for(int l=lines; l>0; l--){
            if(s==segment) {cond1 = 1; cond2=0;};
            if(s==0) {cond1=0; cond2=1;};
            if(cond1==0) print_parte_derecha(s, width);
            if(cond2==0) print_parte_izq(s, width);
        }
        cout << endl;
    }
}