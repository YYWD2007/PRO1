#include <iostream>
#include <vector>
using namespace std;

// Els vectors es poden redimensionar. push_back: Afageix un element al final del vector

int main(){
    vector<string> paraules; 
    paraules.push_back("To"); // casella 0: "To"
    paraules.push_back("be"); // dos elements, casella 1: "be", total 2 elements;

    vector<string> p2;
    string str;
    while(cin>>str){
        p2.push_back(str);
    }
    for(int i=p2.size()-1; i>=0; i--){
        cout << p2[i] << endl;
    }
}