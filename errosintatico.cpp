#include <iostream>

int main() {
    int num1 = 10
    int num2 = 2
    int result = num1 / num2
    std::cout << "o resultado da divisao e: " << result << std::endl
}

// In function 'int main()':
// error: expected ',' or ';' before 'int'
//     int num2 = 2
//     ^~~
// warning: unused variable 'num1' [-Wunused-variable]
//     int num1 = 10
//         ^~~~ 