#include <iostream>
using namespace std;

int main(){
    
    // 定义方式1
    int arr[2][3]; // 两行三列
    arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3; 
    arr[1][0] = 4; arr[1][1] = 5; arr[1][2] = 6;
    for(int i=0; i<=1; i++){   // 打印2维数组
        for(int j=0; j<=2; j++){
            cout << arr[i][j] << endl;
        }
    } 

    // 定义方式2
    int arr2[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    for(int i=0; i<=1; i++){   // 打印
        for(int j=0; j<=2; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    } 

    // 定义方式3
    int arr3[2][3] = {1,2,3,4,5,6};
       for(int i=0; i<=1; i++){   // 打印
        for(int j=0; j<=2; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    } 

    // 定义方式4
    int arr4[][3] = {1,2,3,4,5,6};
     for(int i=0; i<=1; i++){   // 打印
        for(int j=0; j<=2; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }  
}