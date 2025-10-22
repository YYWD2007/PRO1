#include <iostream>
using namespace std;

int day_n(int d) {
    int n;
    n = 22+2*(((11+21)*(21-11+1))/2)+110;
    return n*d;
}

int bass_bells(int h){
    int s;
    if(h==0) s=12;
    else if(h==12) s=100;
    else if(h>12) s=h-12;
    else s=h;
    return s;
}

int main() {
    int h, m;
    long long t;
    while(cin >> h >> m >> t){
        int n=0;
        if(t>=1440){
            int d;
            d = t/1440;
            n = day_n(d);
            t = t%1440;
            for(t; t>0; t--){   
                if(m==0) n += bass_bells(h) + 4;
                if(m==15) n++;
                if(m==30) n+=2;
                if(m==45) n+=3;
                if(m==60){
                    h += 1;
                    if(h==24) h=0;
                    m-=60;
                    n += bass_bells(h) + 4;
                }
                m++;
            }
            cout << n << endl;
        } else {
            for(t; t>0; t--){ 
                if(m==0) n += bass_bells(h) + 4;  
                if(m==15) n++;
                if(m==30) n+=2;
                if(m==45) n+=3;
                if(m==60){
                    h += 1;
                    if(h==24) h=0;
                    m-=60;
                    n += bass_bells(h) + 4;
                }
                m++;
            }
            cout << n << endl;
        }
    }
}