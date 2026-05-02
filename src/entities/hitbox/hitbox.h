#ifndef HITBOX_H
#define HITBOX_H

#include <string>

class Hitbox {
    protected:
    float width, height;
    std::string hitbox_type;

    public:
    //Constructor
    Hitbox(
        float width,
        float height,
        std::string hitbox_type
    );

    //Getters for the hitbox element
    float getWidth() const;
    float getHeight() const;
    std::string getHitboxType() const;

    //Setters for the hitbox element
    void setWidth(float width); 
    void setHeight(float height);
    void setHitboxType(std::string hitbox_type);

};

#endif