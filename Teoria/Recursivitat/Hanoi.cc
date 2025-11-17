#include <iostream>
using namespace std;

// n 个圆盘， 三个柱子(From, Asist, To) 

/*
形参：hanoi(n, F, A, T)  
如果 n = 3
实参数：hanoi(3, ‘F', 'A', 'T') main 里的调用 
现在要：hanor(n-1, F, T, A) 这是新的形参， T = A, A = T, F=F,  hanoi(2, ‘F', 'T', 'A')
现在要：hanor(n-1, F, T, A) 这是形参 ， 所以 F = F, T =T, A = A., hanoi (1,  'F', 'A', 'T')
*/

void hanoi(int n, char F, char A, char T){
    if(n==1){
        cout << "Move " << 1 << " from " << F << " to " << T << endl;
        return;
    }
    hanoi(n-1, F, T, A);
    cout << "Move " << n << " from " << F << " to " << T << endl;
    hanoi(n-1, A, F, T);
}

int main(){
    hanoi(3, 'F', 'A', 'T');
}
