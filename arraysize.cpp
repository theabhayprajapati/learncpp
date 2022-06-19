#include <iostream>
// make std: globla

int main(int argc, char const *argv[])
{
    int scores[]{23, 4234, 234, 234234};
    // get size
    int size = sizeof(scores) / sizeof(int);
    std::cout << size << std::endl;
    // get size with std::
    std::cout << std::size(scores) << std::endl;
    return 0;
}
