#include <iostream>
using namespace std;

void show_reverse(int& count, int& total){
    string str;
    if(!(cin>>str)) return;
    count ++; total ++;
    show_reverse(count, total);
    count--;
    if(count<total/2) cout << str << endl;
}

int main(){
    int count = 0, total = 0;
    show_reverse(count, total);
}