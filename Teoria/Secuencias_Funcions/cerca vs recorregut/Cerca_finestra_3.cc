#include <iostream>
using namespace std;

/*
    持续读取用户输入的字符，直到某一个由 'a' 和 'b' 
    组成的 3 字符组合（例如 'aab' 或 'bab'）在输入流中重复出现了第二次。
    - Cerca, finestra de 3, sense sentinella
*/


void mira_repetits(char c1, char c2, char c3, int& count, bool& repetida, char x, char y, char z){
    if(x==c1 && y==c2 && z==c3){
            count++;
            if(count>1){
                repetida = true;
                cout << x << y << z << "组合重复了!" << endl;
            }
        }
}

int main(){
    int aaa=0, aab=0, aba=0, baa=0, bbb=0, bba=0, bab=0, abb=0;
    char x=' ', y=' ', z;
    bool repetida = false;
    int pos = 0;
    while(!repetida && cin>>z){
        mira_repetits('a', 'a', 'a', aaa, repetida, x, y, z);
        mira_repetits('a', 'a', 'b', aab, repetida, x, y, z);
        mira_repetits('a', 'b', 'a', aba, repetida, x, y, z);
        mira_repetits('b', 'a', 'a', baa, repetida, x, y, z);
        mira_repetits('b', 'b', 'b', bbb, repetida, x, y, z);
        mira_repetits('b', 'b', 'a', bba, repetida, x, y, z);
        mira_repetits('b', 'a', 'b', bab, repetida, x, y, z);
        mira_repetits('a', 'b', 'b', abb, repetida, x, y, z);
        if(!repetida){
            pos++;
            x=y;
            y=z;
        }
    }
}