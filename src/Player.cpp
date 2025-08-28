#include "Player.hpp"
#include <SFML/Window/Keyboard.hpp>

Player::Player() {
    shape_.setRadius(18);
    shape_.setOrigin(18, 18);
    shape_.setFillColor(sf::Color::Cyan);
    shape_.setPosition(100, 360);
}

void Player::handleInput(float dt) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        shape_.move(260 * dt, 0); // ‰E‚ÉˆÚ“®
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        shape_.move(-260 * dt, 0); // ¶‚ÉˆÚ“®
}
