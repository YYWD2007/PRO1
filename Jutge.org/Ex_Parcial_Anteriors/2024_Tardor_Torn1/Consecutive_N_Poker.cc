#include <iostream>
using namespace std;

void print(int x, char y){
    cout << x << "-Poker de " << y << "!" << endl;
}

int main(){
    int N; char x; int i = 1; 
    cin >> N;
    cin >> x;
    char pre = x;
    if(N==1){
        print(N, pre);
    } else{
        while(i!=N && cin>>x){
            if(pre==x){
                i++;
            } else{
                i = 1;
            }
            pre = x;
        }
        if(i==N){
            print(N, pre);
        } else{
            cout << "No hi ha " << N << "-Poker" << endl;
        }
    }
}