#include <iostream>
int main()
{
    int sum = 0, val = 1;
    //只要val的值小于等于10, while循环就会持续运行
    while (val <= 10) {
        sum += val;
        ++val; //将val加 1
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
