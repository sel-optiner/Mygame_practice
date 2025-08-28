#include "Game.hpp"
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>

Game::Game()
    : window_(sf::VideoMode({ 800, 450 }), "SFML3 SideScroll Demo") {
    window_.setFramerateLimit(60);
    obstacles_.emplace_back(sf::Vector2f{ 42.f, 42.f }, sf::Vector2f{ 650.f, groundY_ - 21.f }, 220.f);
    obstacles_.emplace_back(sf::Vector2f{ 60.f, 28.f }, sf::Vector2f{ 950.f, groundY_ - 14.f }, 200.f);
}

void Game::handleEvents() {
    while (const auto event = window_.pollEvent()) {
        if (event->is<sf::Event::Closed>())
            window_.close();
    }
}

void Game::update(float dt) {
    player_.handleInput(dt);
    for (auto& obs : obstacles_)
        obs.update(dt, 800.f);
}

void Game::render() {
    window_.clear(sf::Color::Black);
    player_.draw(window_);
    for (auto& obs : obstacles_)
        obs.draw(window_);
    window_.display();
}

void Game::reset() {
    // ゲームリセット処理
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
