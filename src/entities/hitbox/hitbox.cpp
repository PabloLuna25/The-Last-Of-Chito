#include "hitbox.h"
#include <string>

Hitbox::Hitbox(float p_width, float p_height, std::string p_hitbox_type)
    : width(p_width), height(p_height), hitbox_type(p_hitbox_type) {}

// Getters for hitbox
float Hitbox::getWidth() const {
    return width;
}
float Hitbox::getHeight() const {
    return height;
}
std::string Hitbox::getHitboxType() const {
    return hitbox_type;
}

//Setters for hitbox
void Hitbox::setWidth(float p_width) {
    this->width = p_width;
}
void Hitbox::setHeight(float p_heigth) {
    this->height = p_heigth;
}
void Hitbox::setHitboxType(std::string p_hitbox_type) {
    this->hitbox_type = p_hitbox_type;
}

