
#include <iostream>
#include <ios>
#include <iomanip>

int main(int argc, char const *argv[])
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello";
    std::cout << "World";
    std::cout << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Hello\n";
    std::cout << "World\n";
    std::cout << "----------" << std::endl;
    //flush
    std::cout << "Hello\nWorld\n" << std::endl << std::flush;

    // set width 
    // Make a formated table with the help of setwidth
    int setwidth = 20;
    std::cout << std::leftk;
    // name, hobby, skills
    std::cout << std::setw(setwidth) << "Name" << std::setw(setwidth) << "Hobby" << std::setw(setwidth) << "Skills" << std::endl;
    std::cout << std::setw(setwidth) << "John" << std::setw(setwidth) << "Coding" << std::setw(setwidth) << "C++" << std::endl;
    std::cout << std::setw(setwidth) << "Mary" << std::setw(setwidth) << "Reading" << std::setw(setwidth) << "C++" << std::endl;
    std::cout << std::setw(setwidth) << "Tom" << std::setw(setwidth) << "Coding" << std::setw(setwidth) << "C++" << std::endl;
    std::cout << std::setw(setwidth) << "Jack" << std::setw(setwidth) << "Coding" << std::setw(setwidth) << "C++" << std::endl;
    std::cout << std::setw(setwidth) << "Jenny" << std::setw(setwidth) << "Reading" << std::setw(setwidth) << "C++" << std::endl;
    // Abhay, Space Exploration , C++
    std::cout << std::setw(setwidth) << "Abhay" << std::setw(setwidth) << "Rockets" << std::setw(setwidth) << "C++" << std::endl;

    return 0;
}
