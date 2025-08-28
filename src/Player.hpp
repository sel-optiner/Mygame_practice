#pragma once
#include <SFML/Graphics.hpp>  // RenderWindow と CircleShape をまとめてインクルード

class Player {
public:
    Player();

    void handleInput(float dt);                   // キー入力処理
    void update(float dt, float groundY);        // 重力処理
    void draw(sf::RenderWindow& window) const;   // 描画

private:
    sf::CircleShape shape_;    // ボールの見た目
    sf::Vector2f velocity_;    // 移動速度
    bool onGround_ = false;    // 地面にいるかどうか
};
