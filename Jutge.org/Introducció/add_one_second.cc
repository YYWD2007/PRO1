#include <iostream>
using namespace std;

struct Time{
    int h;
    int m;
    int s;
};

Time Add_one_second(int x, int y, int z) {
    Time t;
    t.s = z + 1;
    t.m = y;
    t.h = x;
    if(t.s==60) {
        t.m = y + 1;
        if(t.m==60){
            t.h = x + 1;
            if(t.h==24){
                t.h=t.h%24;
            }
            t.m = t.m%60;
        }
        t.s = t.s%60;
    }
    return t;
}

void print(int x){
    if(x<10) {
        cout << "0" << x;
    } else{
        cout << x;
    }
}

int main() {
    Time t;
    int h, m, s;
    cin >> h >> m >> s;
    t = Add_one_second(h, m, s);
    print(t.h);
    cout << ":";
    print(t.m);
    cout << ":";
    print(t.s);
    cout << endl;
}