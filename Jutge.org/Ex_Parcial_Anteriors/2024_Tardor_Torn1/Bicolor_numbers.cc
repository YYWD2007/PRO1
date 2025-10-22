#include <iostream>
using namespace std;

bool is_bicolor(int n){
    bool bicolor;
    if(n<10){
        bicolor = false;
    } else{
        int pre1=0;
        int temp1=0;
        while(n>0 && pre1==temp1){
            pre1 = n%10;
            n /= 10;
            temp1 = n%10;
        }
        if(n==0){
            bicolor = false;
        } else{
            int pre2=0, temp2=0;
            while(n>0 && pre2==temp2){
                pre2 = n%10;
                n /= 10;
                temp2 = n%10;
            }
            if(n==0){
                bicolor = true;
            } else{
                bicolor = false;
            }
        }
    }
    
    return bicolor;
}

int main(){
    int N;
    cin >> N;
    bool b;
    b = is_bicolor(N);
    cout << b << endl;
}