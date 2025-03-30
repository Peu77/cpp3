//
// Created by Emil Ebert on 24.03.25.
//

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap {
protected:
    static constexpr int hitPointsConst = 100;
    static constexpr int energyPointsConst = 50;
    static constexpr int attackDamageConst = 20;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};



#endif //SCAVTRAP_H
