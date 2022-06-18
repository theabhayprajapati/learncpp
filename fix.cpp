#include <iostream>
int main(int argc, char const *argv[])
{
    int value{5};
    std::cout << value << std::endl;
    std::cout << value++ << std::endl;
    std::cout << value << std::endl;
    std::cout << ++value << std::endl;
    std::cout << value << std::endl;
    // decrementing
    std::cout << value-- << std::endl;
    std::cout << value << std::endl;
    std::cout << --value << std::endl;
    value = value -1;
    std::cout << value << std::endl;
    std::cout << value << std::endl;
    return 0;
}
