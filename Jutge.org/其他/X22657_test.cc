#include <iostream>
using namespace std;

int main(){
    int n, h;
    cin >> n;
    while(n>0){
        int desn_pos_acum=0, desn_neg_acum=0, desn_max_pos=0;
        int desn_pos_acum_temp=0;
        cin >> h;
        if(h!=-1){
            int pre = h; 
            while(cin>>h && h!=-1){
                if(h>pre) {desn_pos_acum += h-pre; desn_pos_acum_temp += h-pre;}
                if(pre>h) {
                    desn_neg_acum += pre-h; 
                    if(desn_pos_acum_temp>desn_max_pos) desn_max_pos=desn_pos_acum_temp;
                    desn_pos_acum_temp = 0;
                }
                pre = h;
            }
            if(desn_pos_acum_temp>desn_max_pos) desn_max_pos=desn_pos_acum_temp;
        }
        cout << desn_pos_acum << " " << desn_neg_acum << " " << desn_max_pos << endl;
        n--;
    }
}