#include "Player.hpp"
#include <SFML/Window/Keyboard.hpp>

Player::Player() {
    shape_.setRadius(18.f);
    shape_.setOrigin(sf::Vector2f(18.f, 18.f));  // Vector2f に変更
    shape_.setFillColor(sf::Color::Cyan);
    shape_.setPosition(sf::Vector2f(100.f, 360.f));  // Vector2f に変更
}

void Player::handleInput(float dt) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
        shape_.move(sf::Vector2f(260.f * dt, 0.f));  // Vector2f に変更
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
        shape_.move(sf::Vector2f(-260.f * dt, 0.f)); // Vector2f に変更
}

void Player::draw(sf::RenderWindow& window) const {
    window.draw(shape_);
}
