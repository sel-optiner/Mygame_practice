#pragma once
#pragma once
#include "Player.hpp"
#include "Obstacle.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
#include <vector>

class Game {
public:
    Game();
    void run();

private:
    void handleEvents();
    void update(float dt);
    void render();
    void reset();

    sf::RenderWindow window_;   // ゲームのウィンドウ
    Player player_;             // プレイヤー
    std::vector<Obstacle> obstacles_; // 複数の障害物

    float groundY_ = 380.f;     // 地面の高さ
    bool gameOver_ = false;     // ゲームオーバー判定
    bool gameClear_ = false;    // クリア判定
    float elapsed_ = 0.f;       // 生存時間
};
