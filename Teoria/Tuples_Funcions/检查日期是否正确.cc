#include <iostream>
using namespace std;

// dates correctes(P29448)

struct Data{
    int dia, mes, any;
};

bool llegeix_data(Data&d){
    return bool(cin >>d.dia >> d.mes >> d.any);
}

bool de_traspas(int any){              // 检查是不是闰年
    return(any%4==0 && any%100!=0);
}

bool data_correcta(Data d){
    if(d.mes<1 or d.mes>12){
        return false;
    } else if(d.mes==2){
        const int ult_dia = (de_traspas(d.any) ? 29 : 28);
        return d.dia >=1 && d.dia <= ult_dia;
    } else if(d.mes==4 or d.mes==9 or d.mes==11){
        return d.dia >= 1 && d.dia <= 30;
    } else{
        return d.dia >= 1 && d.dia <=31;
    }
}

int main(){
    Data d;
    while(llegeix_data(d)){
        cout << "Data " << (data_correcta(d) ? "Correcta" : "Incorrecta") << endl;
    }
}