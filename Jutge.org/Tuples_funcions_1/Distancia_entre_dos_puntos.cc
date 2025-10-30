#include <iostream>
#include <cmath>
using namespace std;

struct Punt{
    double x, y;
};

/*
* @pre a y b son de tipo Punt.
* @post retorna la distancia euclidiana entre los dos puntos en 2D.
*/
double distancia(const Punt& a, const Punt& b){
    Punt result;
    double d;
    result = {.x=a.x-b.x, .y=a.y-b.y};
    d = sqrt(result.x*result.x + result.y*result.y);
    return d;
}

