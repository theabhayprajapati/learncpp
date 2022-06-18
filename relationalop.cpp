#include <iostream>
int main(int argc, char const *argv[])
{
    int value1 = 5;
    int value2 = 5;
    // compare
    std::cout << "Compare: " << std::endl;
    std::cout << std::boolalpha << (value1 == value2) << std::endl;
    std::cout << (value1 < value2) << std::endl;
    std::cout << (value1 > value2) << std::endl;
    std::cout << (value1 <= value2) << std::endl;
    std::cout << std::boolalpha << (value1 >= value2) << std::endl;
    // do comparing in form of 1/0
    std::cout << "Compare in form of 1/0: " << std::endl;
    std::cout << (value1 == value2) << std::endl;
    std::cout << (value1 < value2) << std::endl;
    std::cout << (value1 > value2) << std::endl;
    std::cout << (value1 <= value2) << std::endl;
    std::cout << (value1 >= value2) << std::endl;

    // addition
    // print trure false for the result
    return 0;
}
