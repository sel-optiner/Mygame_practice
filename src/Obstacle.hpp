#pragma once
#pragma once
#include <SFML/Graphics/RectangleShape.hpp>

class Obstacle {
public:
    Obstacle(sf::Vector2f size, sf::Vector2f startPos, float speed);
    void update(float dt, float resetX); // ç∂Ç÷ó¨ÇÍÇÈ
    void draw(sf::RenderWindow& window) const;
    sf::FloatRect bounds() const { return rect_.getGlobalBounds(); }

private:
    sf::RectangleShape rect_;
    float speed_;
};
