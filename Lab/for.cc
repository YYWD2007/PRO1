#include <iostream>
using namespace std;
int main () {
    int N, i=0, sum=0, num;
    cin >> N;
/*
    while(i<N) {
        cin >> num;
        sum += num;
        i++;
    }
*/
    for(int i=0; i<N; i++) {
        cin >> num;
        sum += num;
    }
    cout << float(sum)/N << endl;
}