#ifndef KGAMEENGINE_H
#define KGAMEENGINE_H

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

class KGameEngine
{
    public:
        KGameEngine();
        ~KGameEngine();

        sf::RenderWindow window;

        int screenWidth = 640;
        int screenHeight = 480;

        sf::Texture load_texture_from_disk(std::string path);
        void update(sf::Sprite spriteToRender);
};

#endif // KGAMEENGINE_H
