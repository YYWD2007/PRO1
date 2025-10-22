#include <iostream>
using namespace std;

bool is_valid_date(int d, int m, int y){
    bool date=true;
    if (m <= 0 || m>12){
        date = false;
    } else if(d<1){
        date = false;
    } else{
        if(m==4 || m==6 || m==9 || m==11){
            date = (d<=30);
        } else if(m==2){
            if(y%4==0 && y%100!=0) date = (d<=29);
            else if(y%400==0) date = (d<=29);
            else date = (d<=28);
        } else date = (d<=31);
    }
    return date;
}

int main(){
    int d, m, y;
    cin >> d >> m >> y;
    bool date;
    date = is_valid_date(d, m, y);
    cout << (date? "true": "false") << endl;
}