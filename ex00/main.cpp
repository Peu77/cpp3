#include "ClapTrap.h"

int main(void) {
	ClapTrap clap1("Clappy");
	ClapTrap clap2("Trappy");

	clap1.attack("Enemy");

	clap1.takeDamage(5);

	clap1.beRepaired(3);
	for (int i = 0; i < 10; i++) {
		clap2.attack("Target");
	}
	clap2.attack("Target");

	clap2.takeDamage(15);
	clap2.beRepaired(5);

	ClapTrap clap3(clap1);
	ClapTrap clap4;
	clap4 = clap1;
	return 0;
}