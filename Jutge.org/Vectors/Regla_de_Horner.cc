#include <iostream>
#include <vector>
using namespace std;

int avalua(const vector<int>& p, int x){
    int result = 0;
    for(int i=p.size()-1; i>=0; i--){
        result = result*x + p[i];
    }
    return result;
}