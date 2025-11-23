#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2){
    vector<int> resultat = v1;
    for(int i=0; i<v2.size(); i++){
        resultat.push_back(v2[i]);
    }
    return resultat;
}

int main(){
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};
    vector<int> resultat = concatenacio(v1, v2);
    for(int i=0; i<resultat.size()-1; i++){
        cout << resultat[i] << " ";
    }
    cout << resultat[resultat.size()-1] << endl;
}


