//
// Created by Emil Ebert on 24.03.25.
//

#include "ScavTrap.h"
#include <iostream>

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    this->name = "default";
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap name constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    this->name = name;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        this->name = other.name;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " has entered in Gate keeper mode" << std::endl;
}


