#include <iostream>
using namespace std;

class CGirl{
public:
    string name;
private:         // 只能在类的内部访问，外部（比如main）不能访问
    int age;
    int time=5;

public:
    void setvalue(string name1, int age1){   
        name = name1;
        age = age1;
    }

    void show(){
        if(time<=0) return;
        cout << "姓名：" << name << " " << "年龄：" << age << endl;
        time--;
        show();
    }
};

int main(){
    CGirl girl;
    girl.setvalue("西施", 26);
    girl.show();
}
