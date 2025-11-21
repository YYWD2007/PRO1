#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> comptador(26, 0); // int: tipus caselles // 26:tamany // 0:valor inicial
    // acces a les caselles(variables)
    comptador[9] = 17;
    comptador[comptador.size()-1] = 1000;

    for(int i=0; i<comptador.size(); i++){
        cout << comptador[i] << endl;
    }

    // Declaracions alternatives
    vector<char> v(4,'x'); // string v = "xxxx"
    vector<int> v2;        // buit 0 caselles
    vector<int> v3(50);    // 50 caselles, no hi ha valor inicial, s'agafa ek "nul" del tipus <>
    vector<string> v4(100);

    vector<int> primers = { 2,3,5,7,11,13 };
    vector<bool> veritat = {false, true, false, true};
    vector<vector<int>> M = {{1,2}, {3,4}, {}}; // 访问2 M[0,1]
    vector<char> vc = {};
}