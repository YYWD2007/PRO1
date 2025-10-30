#include <iostream>
using namespace std;

bool creix(int n){
    string ant, ara;
    bool creixement=true;
    cin >> ant;
    n--;
    while(n>0 && cin>>ara){
        if(ara<ant) creixement=false;
        ant = ara;
        n--;
    }
    return creixement;
}

int main(){
    int n, index=0;
    bool creixent=false;
    while(!creixent && cin>>n){
        index++;
        if(n==0) creixent=true;
        else{
            if(creix(n)) creixent=true;
        }
    }
    if(creixent){
        cout << "La primera linia ordenada creixentment es la " << index << "." << endl;
    } else{
        cout << "No hi ha cap linia ordenada creixentment." << endl;
    }
}