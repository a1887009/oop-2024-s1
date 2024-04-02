#include "player.h"
#include <iostream>
#include <string>

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
}

int Player::getHealth() {return health;}

std::string Player::getName() {return name;}

int Player::getDamage() {return damage;}