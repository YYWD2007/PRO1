#include <iostream>
using namespace std;
int main () {
    // 1- if-else
    int c;
    cin >> c;
    string tipus = "senar";
    if (c % 2 == 0) {
        tipus = "parell";
        cout << tipus << endl;
    } else {
        tipus = "senar";
        cout << tipus << endl;
    }


    
    // 2- Valor absolut(if-else)
    int n, va;
    cout << "Entra un enter: ";
    cin >> n;
    if (n < 0) { //branca true
        va = -n;
    } else {     // branca false
        va = n;
    }
    cout << "El valor absolut de "
    << n << " es " << va << endl;



    // 3.1- IMC index massa corporal(if-else)
    double pes, alc;
    cout << "Pes? ";
    cin >> pes;
    cout << "Alcada? ";
    cin >> alc;
    double IMC = pes / (alc * alc);
    if(IMC < 25.0) {
        cout << "normal" << endl;
    } else {
        if(IMC < 30.0) {
            cout << "sobrepes" << endl;
        } else {
            cout << "obesitat" << endl;
        }
    }   // 25是整数，不行...



    // 3.2- IMC index massa corporal(2) (if-else-if)
    double pes2, alc2;
    cout << "Pes? ";
    cin >> pes2;
    cout << "Alcada? ";
    cin >> alc2;
    double IMC2 = pes2 / (alc2 * alc2);
    if(IMC2 < 25.0) {
        cout << "normal" << endl;
    } else if (IMC2 < 30) {
        cout << "spbrepes" << endl;
    } else {
        cout << "obesitat" << endl;
    }



    // 3.3- IMC index massa corporal(3) (if-else-if)
    double pes3, alc3;
    cout << "Pes? ";
    cin >> pes3;
    cout << "Alcada? ";
    cin >> alc3;
    double IMC3 = pes3 / (alc3 * alc3);
    if(IMC3 < 18.0) {
        cout << "molt prim" << endl;
    } else if (IMC3 < 25.0) {
        cout << "normal" << endl;
    } else if(IMC3 < 30.0) {
        cout << "sobrepes" << endl;
    } else if (IMC3 < 40.0) {
        cout << "obesitat" << endl;
    } else {
        cout << "obesitat+" << endl;
    }
}   
    


