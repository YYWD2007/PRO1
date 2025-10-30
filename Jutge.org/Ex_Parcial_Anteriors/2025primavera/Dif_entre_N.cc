int diferencia(int x, int y){
    if(x==0 && y==0) return 0;
    int temp;
    temp = x%10 - y%10;
    if(temp<0) temp *= -1;
    x /= 10;
    y /= 10;
    return temp += diferencia(x, y);
}
