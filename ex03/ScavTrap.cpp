
#include "ScavTrap.h"
#include "colors.h"
#include <iostream>

ScavTrap::ScavTrap() {
    std::cout << BLUE << "ScavTrap default constructor called" << RESET << std::endl;
    hitPoints = hitPointsConst;
    energyPoints = energyPointsConst;
    attackDamage = attackDamageConst;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name + "_clap_name") {
    std::cout << BLUE << "ScavTrap name constructor called" << RESET << std::endl;
    hitPoints = hitPointsConst;
    energyPoints = energyPointsConst;
    attackDamage = attackDamageConst;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    std::cout << BLUE << "ScavTrap copy constructor called" << RESET << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << BLUE << "ScavTrap copy assignment operator called" << RESET << std::endl;
    if (this != &other) {
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        this->name = other.name;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << BLUE << "ScavTrap " << name << " destructor called" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints <= 0) {
        std::cout << YELLOW << "ScavTrap " << name << " is out of energy and cannot attack!" << RESET << std::endl;
        return;
    }
    if (hitPoints <= 0) {
        std::cout << YELLOW << "ScavTrap " << name << " is too damaged to attack!" << RESET << std::endl;
        return;
    }

    std::cout << RED << "ScavTrap " << name << " strikes " << target
              << ", dealing " << attackDamage << " points of damage!" << RESET << std::endl;
    energyPoints--;
}

void ScavTrap::guardGate() {
    std::cout << GREEN << "ScavTrap " << name << " has entered in Gate keeper mode" << RESET << std::endl;
}