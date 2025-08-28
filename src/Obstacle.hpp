#pragma once
#include <SFML/Graphics.hpp>  // RectangleShape ‚Æ RenderWindow ‚ğ‚Ü‚Æ‚ß‚Ä include

class Obstacle {
public:
    Obstacle(sf::Vector2f size, sf::Vector2f startPos, float speed);

    void update(float dt, float resetX);             // ¶‚Ö—¬‚ê‚é
    void draw(sf::RenderWindow& window) const;       // •`‰æ

    sf::FloatRect bounds() const {                  // “–‚½‚è”»’è—p
        return rect_.getGlobalBounds();
    }

private:
    sf::RectangleShape rect_;  // Œ©‚½–Ú
    float speed_;              // ¶‚É—¬‚ê‚é‘¬‚³
};
