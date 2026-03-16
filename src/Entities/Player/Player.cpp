#include "Player.hpp"

void Player::draw() {
    if (HitBox::drawHitbox) this->hitBox.draw();
    DrawTexturePro(ImageManager::XWing, Rectangle{0, 0, (float)ImageManager::XWing.width, (float)ImageManager::XWing.height},
    Rectangle{this->position.first, this->position.second, 60, 60}, Vector2{0,0}, 0, WHITE
);
}

void Player::update() {
    this->hitBox.box.x = this->position.first;
    this->hitBox.box.y = this->position.second;
    this->cooldown--;

    if (HitBox::Collision(Background::sideWalls.first, this->hitBox)) {
        std::pair<double, double> collision = HitBox::CollisionMargins(this->hitBox, Background::sideWalls.first);
        if (abs(collision.second) < abs(collision.first)) {
            this->position.second += collision.second;
        } else {
            this->position.first += collision.first + 1;
        }
    }
    if (HitBox::Collision(Background::sideWalls.second, this->hitBox)) {
        std::pair<double, double> collision = HitBox::CollisionMargins(this->hitBox, Background::sideWalls.second);
        if (abs(collision.second) < abs(collision.first)) {
            this->position.second += collision.second;
        } else {
            this->position.first += collision.first + 1;
        }
    }
}

void Player::keyInputs() {
    if (IsKeyDown('A') || IsKeyDown(KEY_LEFT)) this->position.first -= this->speed;
    if (IsKeyDown('D') || IsKeyDown(KEY_RIGHT)) this->position.first += this->speed;
    if (IsKeyPressed(KEY_SPACE)) this->attack();
}

void Player::attack() {
    if (cooldown <= 0) {
        Projectile::projectiles.push_back(Projectile(position.first + + this->hitBox.box.width / 2, position.second, 0));
        PlaySound(SoundManager::playerShooting);
        cooldown = 10;

        Projectile::projectiles.push_back(Projectile(position.first + 44, position.second, 0));

        PlaySound(SoundManager::playerShooting);
        cooldown = 10;
    }
}