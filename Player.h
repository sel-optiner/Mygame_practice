#pragma once
#pragma once
#include <SFML/Graphics/CircleShape.hpp>

class Player {
public:
    Player();
    void handleInput(float dt);     // �L�[���͏���
    void update(float dt, float groundY); // �d�͏���
    void draw(sf::RenderWindow& window) const;

private:
    sf::CircleShape shape_;   // �{�[���̌�����
    sf::Vector2f velocity_;   // �ړ����x
    bool onGround_ = false;   // �n�ʂɂ��邩�ǂ���
};
