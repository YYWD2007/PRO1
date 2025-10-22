#include <iostream>
int main()
{   //Ex 1.9
    int sum = 50, val = 51, val2 = 9;
    while(val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;

    // Ex 1.10
    while(val2 > 0) {
        std::cout << val2 << std::endl;
        --val2;
    }

    // Ex 1.11
    std::cout << "Enter two numbers:" << std::endl;
    int val3 = 0, val4 = 0;
    std::cin >> val3 >> val4;
    std::cout << "The numbers between " << val3 << " and " 
              << val4 << " are: " << std::endl;
    while(val3-1 > val4) {
        std::cout << val3 - 1 << std::endl;
        --val3-1;
    }
    while(val4-1 > val3) {
        std::cout << val4 - 1 << std::endl;
        --val4-1;
    }
    return 0;
}

