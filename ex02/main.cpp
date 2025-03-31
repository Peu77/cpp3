#include <iostream>
#include "FragTrap.h"
#include "ClapTrap.h"

int main(void)
{
    std::cout << "Creating FragTrap instance..." << std::endl;
    FragTrap ft("FT-9000");

    std::cout << "\nTesting attack functionality:" << std::endl;
    ft.attack("Enemy Robot");

    std::cout << "\nTesting damage functionality:" << std::endl;
    ft.takeDamage(20);

    std::cout << "\nTesting repair functionality:" << std::endl;
    ft.beRepaired(10);

    std::cout << "\nTesting high five functionality:" << std::endl;
    ft.highFivesGuys();

    std::cout << "\nTesting excessive damage:" << std::endl;
    ft.takeDamage(200);
    ft.attack("Enemy Robot");

    std::cout << "\nCreating copy and testing assignment:" << std::endl;
    FragTrap ft2("FT-8000");
    FragTrap ft3(ft2);
    ft3 = ft;
    return 0;
}