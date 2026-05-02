#include "player.h"
#include <string>

Player::Player(float p_width, float p_height, std::string p_hitbox_type, int p_health, int p_movementSpeed)
    : Hitbox(p_width, p_height, p_hitbox_type), health(p_health), movementSpeed(p_movementSpeed) {}

void Player::takeDamage(int damage){
    health -= damage;
    if (health < 0) health = 0;
}

void Player::heal(int incomingHeals){
    health += incomingHeals;
    if (health > 100) health = 100;
}

// Getters for player
int Player::getHealth() const {
    return health;  
}
int Player::getMovementSpeed() const {
    return movementSpeed;
}

// Setters for player
void Player::setHealth(int p_health){
    this->health = p_health;
}
void Player::setMovementSpeed(int p_movementSpeed){
    this->movementSpeed = p_movementSpeed;
}