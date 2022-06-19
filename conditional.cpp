#include <iostream>
int main(int argc, char const *argv[])
{
    int number1{123};
    int number2{321};
    if (number1 > number2)
    {
        std::cout << number1 << ">" << number2 << "number1 is more than number2" << std::endl;
    }
    else
    {
        std::cout << number1 << "=" << number2 << "number1 and number2 are not equal" << std::endl;
    }
    return 0;
}
