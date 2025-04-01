#include <iostream>
#include "DiamondTrap.h"
#include "colors.h"

int main(void)
{
    std::cout << "===== Creating DiamondTraps on heap =====" << std::endl;
    ClapTrap* d1 = new DiamondTrap("D1");
    ClapTrap* d2 = new DiamondTrap("D2");

    std::cout << "\n===== Testing basic functionality =====" << std::endl;
    d1->attack("Enemy");
    d2->attack("Foe");

    d1->takeDamage(30);
    d1->beRepaired(15);

    std::cout << "\n===== Testing severe damage =====" << std::endl;
    d2->takeDamage(80);
    d2->attack("Target");  // Should still work
    d2->takeDamage(50);    // Should be "dead" now
    d2->attack("Target");  // Should fail due to 0 HP

    std::cout << "\n===== Accessing DiamondTrap specific methods =====" << std::endl;
    // Need to cast to access derived class methods
    DiamondTrap* diamond1 = dynamic_cast<DiamondTrap*>(d1);
    DiamondTrap* diamond2 = dynamic_cast<DiamondTrap*>(d2);

    if (diamond1) {
        diamond1->whoAmI();
        diamond1->highFivesGuys();
        diamond1->guardGate();
    }

    if (diamond2) {
        diamond2->whoAmI();
    }

    std::cout << "\n===== Testing energy depletion =====" << std::endl;
    ClapTrap* d3 = new DiamondTrap("EnergyTest");
    // Run multiple attacks to deplete energy
    for (int i = 0; i < 12; i++) {
        std::cout << "Attack #" << (i+1) << ": ";
        d3->attack("Target");
    }

    std::cout << "\n===== Cleanup =====" << std::endl;
    delete d1;
    delete d2;
    delete d3;

    return 0;
}