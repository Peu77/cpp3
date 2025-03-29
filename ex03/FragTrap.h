//
// Created by Emil Ebert on 24.03.25.
//

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.h"


class FragTrap : virtual public ClapTrap {
public:
    FragTrap();

    FragTrap(std::string name);

    FragTrap(const FragTrap &other);

    FragTrap &operator=(const FragTrap &other);

    ~FragTrap();

    void highFivesGuys();
};


#endif //FRAGTRAP_H
