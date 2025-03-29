#include <iostream>
#include "ScavTrap.h"

int main(void) {
	std::cout << "=== Testing ScavTrap Constructors ===" << std::endl;
	ScavTrap default_scav;

	ScavTrap bob("Bob");

	ScavTrap bob_copy(bob);

	ScavTrap assigned;
	assigned = bob;

	std::cout << "\n=== Testing ScavTrap Functionality ===" << std::endl;
	bob.attack("Enemy");

	bob.takeDamage(30);

	bob.beRepaired(15);

	bob.guardGate();

	std::cout << "\n=== Testing Edge Cases ===" << std::endl;
	ScavTrap energy_test("EnergyBot");
	std::cout << "Depleting energy points..." << std::endl;
	for (int i = 0; i < 51; i++) {
		energy_test.attack("Target");
	}

	ScavTrap hp_test("HealthBot");
	std::cout << "Depleting hit points..." << std::endl;
	hp_test.takeDamage(150);
	hp_test.attack("Target");
	hp_test.beRepaired(10);

	std::cout << "\n=== Destructors will be called now ===" << std::endl;
	return 0;
}