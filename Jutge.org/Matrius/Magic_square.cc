#include <iostream>
#include <vector>
using namespace std;

int suma(const vector< vector<int> >& m, int i, int j, int di, int dj);

// Pre: La taula t és quadrada.
bool quadrat_magic(const vector< vector<int> >& t){
    int n = t.size(); 
    int max = n*n;
    int sum = suma(t, 0, 0, 0, 1);
    if(sum==-1) return false;
    for(int i=1; i<n; i++){
        int temp = suma(t, i, 0, 0, 1);
        if(sum != temp || temp == -1) return false;
    }
    for(int j=0; j<n; j++){
        if(sum != suma(t, 0, j, 1, 0)) return false;
    }
    if(sum!=suma(t, 0, 0, 1, 1)) return false;
    if(sum!=suma(t, 0, n-1, 1, -1)) return false;
    return true;
}

int main(){
    vector< vector<int> > m(3, vector<int>(3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> m[i][j];
        }
    }
    cout << (quadrat_magic(m)? "YES" : "NO") << endl;
}

int suma(const vector< vector<int> >& m, int i, int j, int di, int dj){
    int suma = 0, n = m.size();
    while(i<n && j<n && i>=0 && j>=0){
        if(m[i][j]<1 || m[i][j]>n*n) return -1;
        suma += m[i][j];
        i += di;
        j += dj;
    }
    return suma;
}