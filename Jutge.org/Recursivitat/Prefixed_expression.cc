#include <iostream>
using namespace std;

int cal_prefx_exp(){
    char ch;
    if(!(cin>>ch)) return 0;
    if(ch=='+') return cal_prefx_exp() + cal_prefx_exp();
    else if(ch=='-') return cal_prefx_exp() - cal_prefx_exp();
    else if(ch=='*') return cal_prefx_exp() * cal_prefx_exp();
    return int(ch) - int('0');
}

int main(){
    cout << cal_prefx_exp() << endl;
}