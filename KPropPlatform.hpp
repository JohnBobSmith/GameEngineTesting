#ifndef KPROPPLATFORM_H
#define KPROPPLATFORM_H

#include <SFML/Graphics.hpp>
#include "KGameObject.hpp"
#include <vector>

class KPropPlatform : public KGameObject
{
    public:
        KPropPlatform();
        ~KPropPlatform();

        void create_platform();
        void position_platform(float offsetX, float offsetY, int platformIndex);

    private:
        sf::Texture defaultPlatformTexture;
        sf::Vector2f defaultPlatformPosition;

        const int maxPlatforms = 4;
};

#endif // KPROPPLATFORM_H
