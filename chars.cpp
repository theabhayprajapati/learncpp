#include <iostream>

int main(int argc, char const *argv[])
{
    char name[]{'a', 'b', 'c', 'd', 'e','\0'};
    // print name
    for (auto letter : name)
    {
        std::cout << letter << std::endl;
    }
    std::cout << name << std::endl;
    // String literal
    char name2[] = "abcde";
    // print name
    std::cout << name2 << std::endl;
    return 0;
}
