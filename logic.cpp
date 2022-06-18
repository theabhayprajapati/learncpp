// logical operator
#include <iostream>
int main(int argc, char const *argv[])
{
    bool value1 = true;
    bool value2 = true;
    // logical operator
    std::cout << "Logical operator: " << std::endl;
    std::cout << std::boolalpha << (value1 && value2) << std::endl;
    std::cout << (value1 || value2) << std::endl;
    std::cout << !value1 << std::endl;

    // make a complex logical expression
    std::cout << "Complex logical expression: " << std::endl;
    std::cout << std::boolalpha << !(value1 && value2) || value2 << std::endl;
    return 0;
}
