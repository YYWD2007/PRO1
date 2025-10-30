#include <iostream>
#include <cassert>
using namespace std;

// Precondition: 0<=n<=12. Postcondition: retorna el factorial de n.
int factorial(int n){
    assert(0<=n && n<=12);
    int result = 1;
    for(int temp=2; temp<=n; temp++){
        result *= temp;
    }
    return result;
}

int main(){
    int n;
    while(cin>>n){
        cout << factorial(n) << endl;
    }
}