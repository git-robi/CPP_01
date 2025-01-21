#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;

    std::cout << "DEBUG:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n";

    std::cout << "INFO:" << std::endl;
    harl.complain("INFO");

    std::cout << "\n";

    std::cout << "WARNING:" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\n";

    std::cout << "ERROR:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n";

    std::cout << "INVALID LEVEL:" << std::endl;
    harl.complain("INVALID LEVEL");

    return (0);
}