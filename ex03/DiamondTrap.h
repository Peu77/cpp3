//
// Created by Emil Ebert on 29.03.25.
//

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"


class DiamondTrap: public FragTrap, public ScavTrap {
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();
    DiamondTrap& operator=(const DiamondTrap &other);
    void whoAmI();
    void attack(const std::string &target);
    void setName(std::string name);
    std::string getName() const;
};



#endif //DIAMONDTRAP_H
