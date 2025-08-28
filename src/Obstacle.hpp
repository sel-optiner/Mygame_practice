#pragma once
#include <SFML/Graphics.hpp>  // RectangleShape �� RenderWindow ���܂Ƃ߂� include

class Obstacle {
public:
    Obstacle(sf::Vector2f size, sf::Vector2f startPos, float speed);

    void update(float dt, float resetX);             // ���֗����
    void draw(sf::RenderWindow& window) const;       // �`��

    sf::FloatRect bounds() const {                  // �����蔻��p
        return rect_.getGlobalBounds();
    }

private:
    sf::RectangleShape rect_;  // ������
    float speed_;              // ���ɗ���鑬��
};
