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
    int sum = add(1, 2);
    std::cout << sum << std::endl;
    return 0;
}
