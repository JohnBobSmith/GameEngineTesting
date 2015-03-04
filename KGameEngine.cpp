#include "KGameEngine.hpp"
#include <string>
#include <vector>
#include <iostream>

KGameEngine::KGameEngine()
{
    window.create(sf::VideoMode(screenWidth, screenHeight), "KISSE 2D");
}

KGameEngine::~KGameEngine()
{
    //Nothing to cleanup currently.
}

sf::Texture KGameEngine::load_texture_from_disk(std::string path)
{
    sf::Texture tempTexture;

    if (!tempTexture.loadFromFile(path.c_str())) {
        std::cout << "Failed to load texture " << path.c_str() << std::endl;
    }

    return tempTexture;
}

void KGameEngine::update(sf::Sprite spriteToRender)
{
    window.draw(spriteToRender);
}
