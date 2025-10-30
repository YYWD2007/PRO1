#include <iostream>
using namespace std;

int main(){
    int n, temp=0, result=0;
    char ch, pre;
    cin >> n;
    cin >> ch; pre = ch;
    while(cin>>ch){
        if(pre=='a' && ch=='b'){
            temp++;
            if(temp==n || temp>n) result++;
        }else if(pre=='b' && ch=='a'){
            temp=temp;
        }else{
            temp=0;
        }
        pre = ch;
    }
    cout << result << endl;
}