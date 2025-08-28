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

    sf::RenderWindow window_;   // �Q�[���̃E�B���h�E
    Player player_;             // �v���C���[
    std::vector<Obstacle> obstacles_; // �����̏�Q��

    float groundY_ = 380.f;     // �n�ʂ̍���
    bool gameOver_ = false;     // �Q�[���I�[�o�[����
    bool gameClear_ = false;    // �N���A����
    float elapsed_ = 0.f;       // ��������
};
