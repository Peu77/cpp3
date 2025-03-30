#include "FragTrap.h"
#include "colors.h"
#include <iostream>

FragTrap::FragTrap() {
    std::cout << YELLOW << "FragTrap default constructor called" << RESET << std::endl;
    hitPoints = hitPointsConst;
    energyPoints = energyPointsConst;
    attackDamage = attackDamageConst;
    this->name = "default";
}

FragTrap::FragTrap(std::string name) {
    std::cout << YELLOW << "FragTrap name constructor called" << RESET << std::endl;
    hitPoints = hitPointsConst;
    energyPoints = energyPointsConst;
    attackDamage = attackDamageConst;
    this->name = name;
}

FragTrap::FragTrap(const FragTrap& other) {
    std::cout << YELLOW << "FragTrap copy constructor called" << RESET << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << YELLOW << "FragTrap copy assignment operator called" << RESET << std::endl;
    if (this != &other) {
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        this->name = other.name;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << YELLOW << "FragTrap " << name << " destructor called" << RESET << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << CYAN << "FragTrap " << name << " requests a high five!" << RESET << std::endl;
}