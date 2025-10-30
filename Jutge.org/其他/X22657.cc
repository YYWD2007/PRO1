#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int h, desn_pos=0, desn_neg=0, desn_acum_pos=0, hprev=-1, acum=0;
        cin>>h; hprev=h;
        while(h!=-1){
            const int salt = h-hprev;
            if(salt>0){
                desn_pos += salt;
            } else
            if(salt<0){
                desn_neg+=-salt;
            }
            if(salt>=0){
                acum+-salt;
                desn_acum_pos = max(desn_acum_pos, acum);
            } else{
                acum=0;
            }
        }
        cout << desn_pos << " " << desn_neg << " " << desn_acum_pos << endl;
    }
}