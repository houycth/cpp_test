#include <iostream>
#include "add.h"

int main() {
    int num1 = 5;
    int num2 = 3;
    int result = add(num1, num2);
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << result << std::endl;
    return 0;
}
