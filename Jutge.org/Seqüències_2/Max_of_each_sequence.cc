#include <iostream>
using namespace std;

int main(){
    int n, numbers;
    while(cin>>n){
        int count=1;
        cin >> numbers;
        int max;
        max = numbers;
        while(count<n && cin>>numbers){
            if(numbers>max){
                max=numbers;
            } else{
                max=max;
            }
            count++;
        }
        cout << max << endl;
    }
}