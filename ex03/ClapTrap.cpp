//
// Created by Emil Ebert on 24.03.25.
//

#include "ClapTrap.h"
#include <iostream>

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy points left to attack!" << std::endl;
        return;
    }
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " is out of hit points and cannot attack!" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " is already defeated!" << std::endl;
        return;
    }

    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;

    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy points left to repair itself!" << std::endl;
        return;
    }
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " is out of hit points and cannot repair itself!" << std::endl;
        return;
    }

    hitPoints += amount;
    energyPoints--;

    std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " hit points! Current hit points: " << hitPoints << std::endl;
}