#include <iostream>
#include <vector>
using namespace std;

class Member{
public:
    int number;
    int total;
    vector<string> names;
    vector<int> ages;

    Member(int t){
        total = t;
        names = vector<string>(total);
        ages = vector<int>(total);
    }

/*  ~Member(){
        cout << "已保存！" << endl;
    }
*/
    void show(int n){
        cout << "Number: " << n << endl;
        cout << "Name: " << names[n] << endl;
        cout << "Age: " << ages[n] << endl;
    }
};

int main(){
    cout << "输入将要注册的人数：";
    int total;
    cin >> total;
    Member P(total);
    cout << "输入每个人的编号，姓名和年龄：";
    int n, age; string name;
    while(total>0){
        cin >> n >> name >> age;
        P.names[n] = name;
        P.ages[n] = age; 
        total--;
    }
    cout << "已全部保存" << endl;
    cout << endl;

    while(true){
        cout << "输入想查找人的编号，将会显示此人的全部其他信息: ";
        cin >> n;
        P.show(n);
    }
}