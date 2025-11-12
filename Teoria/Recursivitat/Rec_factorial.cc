#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){           // cas base
        return 1;
    }
    return n * factorial(n - 1);
}