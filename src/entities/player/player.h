#ifndef PLAYER_H
#define PLAYER_H
#include "../hitbox/hitbox.h"
#include <string>       

class Player : public Hitbox {
private:
    int health;
    int movementSpeed;

public:
    Player(
        float width,
        float height,
        std::string hitbox_type,
        int health,
        int movementSpeed
    );

    //Getters
    int getHealth() const;
    int getMovementSpeed() const;

    //Setters
    void setHealth(int health);
    void setMovementSpeed(int movementSpeed);

    //Interactions (as for now)
    void takeDamage(int damage);
    void heal(int incomingHeals);
};

#endif