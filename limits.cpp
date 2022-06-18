#include <iostream>
#include <limits>
int main(int argc, char const *argv[])
{
    std::cout << "The range of short from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "The range of int from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "The range of long from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "The range of long long from " << std::numeric_limits<long long>::min() << " to " << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "The range of unsigned short from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "The range of unsigned int from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "The range of unsigned long from " << std::numeric_limits<unsigned long>::min() << " to " << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << "The range of unsigned long long from " << std::numeric_limits<unsigned long long>::min() << " to " << std::numeric_limits<unsigned long long>::max() << std::endl;
    std::cout << "The range of float from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
       
    return 0;
}
