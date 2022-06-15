#include <iostream>
int add(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{

    std::cout << "Hello, World!" << std::endl;
    int first {1};
    int second {2};
    std::cout << "the sum is for 12, 12 " << add(12, 12) << std::endl;
    return 0;
}