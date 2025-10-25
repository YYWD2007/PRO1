#include <iostream>
using namespace std;

int altura(int n){
    int alt = 4;
    for(int k=n/2; k>0; k--){
        alt += 4;
    }
    return alt;
}

int espacio(int n){
    int esp = 3;
    for(int k=n/2; k>0; k--){
        esp += 4;
    }
    return esp;
}

void print_space_letter(int x, int y){
    for(int i=x; i>0; i--){
        cout << ' ';
    }
    for(int j=y; j>0; j--){
        cout << 'A';
    }
}

void print_part1_3(int x, int& y, int& z){
    for(int k=x; k>0; k--){
        print_space_letter(y, z);
        cout << endl;
        z += 2;
        y -= 1;
    }
}

void print_part2_4(int x, int& y, int& z, int& v){ // x=temp y=esp z=temp3 v=esp2
    for(int k=x; k>0; k--){
        print_space_letter(y, z/2);           
        print_space_letter(v, z/2);
        cout << endl;
        y -= 1;
        v += 2;
    }
}

void result(int n){
    int alt = altura(n);
    int esp2=1; if(n%2==0) esp2=2;
    int temp = alt/4, temp2 = n, temp3=0, temp4 = 0;
    int esp = espacio(n);
    print_part1_3(temp, esp, temp2);
    temp3 = temp2-1;
    print_part2_4(temp, esp, temp3, esp2);
    temp4 = temp3 + esp2; if(n%2==0) temp4 = temp3 + esp2 - 1;
    print_part1_3(temp, esp, temp4);
    esp2 = temp4 - temp3; if(n%2==0) esp2 = temp4 - temp3 + 1;
    print_part2_4(temp, esp, temp3, esp2);
}

int main(){
    int n;
    while(cin>>n){
        result(n);
        cout << endl;
    }
}