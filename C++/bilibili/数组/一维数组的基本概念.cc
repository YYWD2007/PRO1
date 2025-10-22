#include <iostream>
#include <cstring>  
using namespace std;

/* 数组是一组类型相同的变量，可以存放一组数据

*/

int main(){
    int bh[8];
    string name[3];
    bh[0] = 3;
    bh[1] = 8;
    bh[2] = 5;

    cout << "bh[0] = " << bh[0] << endl;
    cout << "bh[0] = " << bh[1] << endl;
    cout << "bh[0] = " << bh[2] << endl;

    int ii;
    ii = 0; bh[ii]=56;
    ii = 1; bh[ii]=98;
    cout << "bh[1]=" << bh[ii] << endl;
    ii = 0; cout << "bh[0]=" << bh[ii] << endl;

    int z;
    for(z=0; z<3; z++){
        bh[z] = 30 + z;
        cout << "bh[" << z <<"]=" << bh[z] << endl;
    }
    cout << "数组bh占用的内存空间是: " << sizeof(bh) << endl;

    int j[5] = {3,6,1,2,8};
    for(z=0; z<5; z++){
        cout << "j[" << z <<"]=" << j[z] << endl;
    }
    


    int s[] = {3,6,1,2,8,5,68};
    for(int l=0; l<sizeof(s)/sizeof(int); l++){
        cout << "s[" << l <<"]=" << s[l] << endl;
    }

}