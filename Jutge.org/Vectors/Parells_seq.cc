#include <iostream>
#include <vector>
using namespace std;

bool es_primer(int x, int y){
    if(x<=1) return false;
    if(x!=y && x%y==0) return false;
    if(y*y>x) return true;
    return es_primer(x, y+1);
}

int main(){
    int n;
    while(cin>>n){
        vector<int> numbers(n);
        for(int i=0; i<n; i++){
            cin >> numbers[i];
        }
        bool primer = false;
        for(int count=0; count<n && !primer; count++){
            for(int k=count+1; k<n; k++){
                if(es_primer(numbers[count] + numbers[k], 2)) primer = true;
            }
        }
        cout << (primer? "si": "no") << endl;
    }
}
