#include <iostream>
int main(int argc, char const *argv[])
{
    int scores[5];
    // print it
    for (int i = 0; i < 5; i++)
    {
        std::cout << scores[i] << std::endl;
    }
    // make loop and add values
    for (int i = 0; i < 5; i++)
    {
        scores[i] = i;
    }
    for (auto score : scores)
    {
        std::cout << score << std::endl;
    }

    // auto size array
    int goals[]{1, 3, 5, 7, 9};
    // print size
    std::cout << sizeof(goals) / sizeof(int) << std::endl;
    // print array
    for (auto goal : goals)
    {
        std::cout << goal << std::endl;
    }
    const int birds[] {1,23,23,42,34,234,2342};
    // chagne value
    
    return 0;
}
