#include <iostream>
#include <vector>
using namespace std;

bool conte(string s1, string s2){
    if(s2.size()>s1.size()) return false;
    if(s1==s2) return true;
    for(int i=0; i<s1.size()-s2.size()+1; i++){
        bool conte = true;
        int temp = i;
        for(int j=0; j<s2.size() && conte; j++){
            if(s1[temp]!=s2[j]) conte = false;
            else temp++;
        }
        if(conte) return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<string> strs(n);
    for(int i=0; i<strs.size(); i++){
        cin >> strs[i];
    }
    for(int k=0; k<strs.size(); k++){
        cout << strs[k] << ": ";
        vector<string> result(n);
        int cont = 0;
        for(int j=0; j<strs.size(); j++){
            if(conte(strs[k], strs[j])) {
                result[cont] = strs[j];
                cont++;
            }
        }
        for(int l=0; l<cont-1; l++){
            cout << result[l] << " ";
        }
        cout << result[cont-1] << endl; // cont 不可能<1 因为单词和自己是重合的
    }
}