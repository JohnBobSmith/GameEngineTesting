#ifndef KGAMEOBJECT_H
#define KGAMEOBJECT_H

#include <SFML/Graphics.hpp>
#include <vector>

class KGameObject
{
    public:
        KGameObject();
        ~KGameObject();

        typedef struct KGameObjectBase
        {
            sf::Texture objectTexture;
            sf::Vector2f objectPosition;
            sf::Sprite objectSprite;

        } kGameObject;

        const int maxGameObjects = 4;
        std::vector<kGameObject*> worldGameObjectStorage;
};

#endif // KGAMEOBJECT_H
