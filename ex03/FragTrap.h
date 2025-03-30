//
// Created by Emil Ebert on 24.03.25.
//

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.h"


class FragTrap : virtual public ClapTrap {
protected:
    static constexpr int hitPointsConst = 100;
    static constexpr int energyPointsConst = 50;
    static constexpr int attackDamageConst = 30;
public:
    FragTrap();

    FragTrap(std::string name);

    FragTrap(const FragTrap &other);

    FragTrap &operator=(const FragTrap &other);

    ~FragTrap();

    void highFivesGuys();
};


#endif //FRAGTRAP_H
