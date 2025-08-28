#include "Game.hpp"
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>

Game::Game()
    : window_(sf::VideoMode({ 800, 450 }), "SFML3 SideScroll Demo") {
    window_.setFramerateLimit(60);

    // è·äQï®Çí«â¡
    obstacles_.emplace_back(sf::Vector2f{ 42, 42 }, sf::Vector2f{ 650, groundY_ - 21 }, 220);
    obstacles_.emplace_back(sf::Vector2f{ 60, 28 }, sf::Vector2f{ 950, groundY_ - 14 }, 200);
}

void Game::run() {
    sf::Clock clock;
    while (window_.isOpen()) {
        handleEvents();
        float dt = clock.restart().asSeconds();
        update(dt);
        render();
    }
}
