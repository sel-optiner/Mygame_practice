#include "Obstacle.hpp"

Obstacle::Obstacle(sf::Vector2f size, sf::Vector2f startPos, float speed)
    : speed_(speed) {
    rect_.setSize(size);
    rect_.setOrigin(size * 0.5f);
    rect_.setPosition(startPos);      // OK: Vector2f
    rect_.setFillColor(sf::Color::Red);
}

void Obstacle::update(float dt, float resetX) {
    // move ‚Í Vector2f ‚ð“n‚·
    rect_.move(sf::Vector2f(-speed_ * dt, 0.f));

    if (rect_.getPosition().x < 0.f) {
        rect_.setPosition(sf::Vector2f(resetX, rect_.getPosition().y)); // Vector2f
    }
}

void Obstacle::draw(sf::RenderWindow& window) const {
    window.draw(rect_);
}

