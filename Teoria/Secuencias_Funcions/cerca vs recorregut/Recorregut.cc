#include <iostream>
using namespace std;

/*
N = 4
0 1 2 3 -1  Subsque1
4 5 8 9 10 -1 Subseq2
100 200 100 -1 Subseq3
-1 Subs4
*/

bool sequencia_creixent(){
    int x, ux=-1; bool creixent = true;
    while(cin>>x && x!=-1){
        if(ux>x && ux!=-1){
            creixent = false;   // 在这种程序里应使用遍历式（Recorregut）才能保证输入正确, 不能直接return fasle;
        }
        ux = x;
    }
    return creixent;
}

int quantes_creixents(){
    int n, quantes=0;
    cin >> n;
    for(int i=0; i<n; i++){
        if(sequencia_creixent()){
            quantes++;
        } 
    }
    return quantes;
}

int main(){
    cout << quantes_creixents() << endl;
}