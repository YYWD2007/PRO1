#include <iostream>
using namespace std;

void print(int x){
    if(x==10){
        cout << "A";
    } else if(x==11){
        cout << "B";
    } else if(x==12){
        cout << "C";
    } else if(x==13){
        cout << "D";
    } else if(x==14){
        cout << "E";
    } else if(x==15){
        cout << "F";
    } else {
        cout << x;
    }
}

int main() {
    int x;
    cin >> x;
    if(x==0){
        cout << 0 << endl;
    } else{
        while(x>0){
            print(x%16);
            x = x/16;
        }
        cout << endl;
    }
}

