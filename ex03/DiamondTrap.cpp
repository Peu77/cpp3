//
// Created by Emil Ebert on 29.03.25.
//

#include "DiamondTrap.h"
#include <iostream>
#include "colors.h"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name") {
    std::cout << ORANGE <<  "DiamondTrap default constructor called" << RESET << std::endl;
    this->name = "default";
    this->hitPoints = FragTrap::hitPointsConst;
    this->energyPoints = ScavTrap::energyPointsConst;
    this->attackDamage = FragTrap::attackDamageConst;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
    std::cout << ORANGE <<  "DiamondTrap constructor called" << RESET << std::endl;
    this->name = name;
    this->hitPoints = FragTrap::hitPointsConst;
    this->energyPoints = ScavTrap::energyPointsConst;
    this->attackDamage = FragTrap::attackDamageConst;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {
    std::cout << ORANGE << "DiamondTrap copy constructor called" << RESET << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << ORANGE << "DiamondTrap copy assignment operator called"  << RESET << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout  << ORANGE << "DiamondTrap " << name << " destructor called" << RESET << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << ORANGE << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::name  << RESET<< std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}