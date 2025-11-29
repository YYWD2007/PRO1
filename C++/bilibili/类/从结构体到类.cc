#include <iostream>
using namespace std;

class CGirl{
public:
    string name;
    int age;

    void setvalue(string name1, int age1){   
        name = name1;
        age = age1;
    }

    void show(){
        cout << "姓名：" << name << " " << "年龄：" << age << endl;
    }
};

int main(){
    CGirl girl;
    girl.setvalue("西施", 26);
    girl.show();
}