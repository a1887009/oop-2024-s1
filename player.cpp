#include "player.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

Player::Player(std::string name, int health, int damage){
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent, int damage){
    //opponent->health -= damage;
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage){
    health -= damage;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

int Player::getHealth() {return health;}

std::string Player::getName() {return name;}

int Player::getDamage() {return damage;}