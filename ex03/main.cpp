#include <iostream>
#include "DiamondTrap.h"
#include "ClapTrap.h"

int main(void)
{
    // Test constructor
    std::cout << "===== Creating DiamondTrap =====" << std::endl;
    DiamondTrap d1("D1");

    // Test whoAmI method
    std::cout << "\n===== Testing whoAmI() =====" << std::endl;
    d1.whoAmI();

    // Test attack method (inherited from ScavTrap)
    std::cout << "\n===== Testing attack() =====" << std::endl;
    d1.attack("Enemy");

    // Test parent class functionality
    std::cout << "\n===== Testing inherited functionality =====" << std::endl;
    d1.highFivesGuys(); // From FragTrap
    d1.guardGate();     // From ScavTrap

    // Test copy constructor
    std::cout << "\n===== Testing copy constructor =====" << std::endl;
    DiamondTrap d2(d1);
    d2.whoAmI();

    // Test assignment operator
    std::cout << "\n===== Testing assignment operator =====" << std::endl;
    DiamondTrap d3("D3");
    std::cout << "Before assignment:" << std::endl;
    d3.whoAmI();
    d3 = d1;
    std::cout << "After assignment:" << std::endl;
    d3.whoAmI();

    // Test base class functionality
    std::cout << "\n===== Testing ClapTrap base functionality =====" << std::endl;
    d1.takeDamage(30);
    d1.beRepaired(10);

    // Destructor will be called automatically at end of scope
    std::cout << "\n===== End of program =====" << std::endl;

    return 0;
}