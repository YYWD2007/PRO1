#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        double suma = 0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            suma += v[i];
        }
        int i=0;
        bool trobat = false;
        while(i<n and not trobat){
            if(v[i] == suma/2){
                trobat = true;      
            } else i++;
        }
        cout << (trobat ? "YES" : "NO") << endl;
    }
}