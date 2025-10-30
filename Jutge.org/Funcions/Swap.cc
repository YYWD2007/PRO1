#include <iostream>
using namespace std;

void swap2(int& a, int& b){
    int temp=b;
    b = a;
    a = temp;
}