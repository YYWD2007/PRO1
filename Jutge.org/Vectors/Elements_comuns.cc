#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y){
    int cont = 0;
    int k = 0, temp = 0;
    for(int i=0; i<X.size(); i++){
        k = temp;
        for(k; k<Y.size(); k++){
            if(X[i]<Y[k]){
                temp = k;
                k = Y.size();
            } else if(X[i]==Y[k]){
                cont++;
            }
        }
    }
    return cont;
}

int main(){
    vector<int> X = {1,2,3,4,5};
    vector<int> Y = {1,2,5,8,9};
    cout << elements_comuns(X, Y) << endl;
}