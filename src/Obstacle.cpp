#include "Obstacle.hpp"

Obstacle::Obstacle(sf::Vector2f size, sf::Vector2f startPos, float speed)
    : speed_(speed) {
    rect_.setSize(size);
    rect_.setOrigin(size * 0.5f);
    rect_.setPosition(startPos);
    rect_.setFillColor(sf::Color::Red);
}

void Obstacle::update(float dt, float resetX) {
    rect_.move(-speed_ * dt, 0);
    if (rect_.getPosition().x < 0) {
        rect_.setPosition(resetX, rect_.getPosition().y); // 画面外に出たら右端に戻す
    }
}
