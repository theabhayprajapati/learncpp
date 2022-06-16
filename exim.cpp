// learning about import and export
// std:: cout, cin, cerr, clog

#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Hell o, World!" << std::endl;
    std::cerr << "you are caught " << std::endl;
    std::clog << "your logs" << std::endl;
    std::cout << "enter your name" << std::endl;
    // make a variable for name
    std::string name;

    std::cout << "Enter you age" << std::endl;
    int age;
    std::cin >> name >> age;
    std::cout << "Hello " << name << "you are  " << age << std::endl;
    // get data with spaces
    std::cout << "enter your name and age" << std::endl;
    std::cin >> name >> age;
    std::cout << "Hello " << name << "you are  " << age << std::endl;
    // get data with spaces
    std::string full_name;
    std::cout << "enter your full name" << std::endl;
    std::cin >> full_name;
    std::cout << "Hello " << full_name << std::endl;

    return 0;
}
