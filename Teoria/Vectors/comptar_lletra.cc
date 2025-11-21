#include <iostream>
#include <vector>
using namespace std;

/* 
 *seq de lletres minuscules, comptar quantes surten de cada
 *necessitem 26 comptadors, declaracio de 26 variables enteres amb un 0
*/

int main(){
    vector<int> comptadors(26,0);
    char c;
    while(cin>>c){
        comptadors[c - 'a'] ++;
    }
    for(int i=0; i<comptadors.size(); i++){
        if(comptadors[i]!=0){
            cout << char(i+'a') << ": " << comptadors[i] << endl;
        }
    }
}