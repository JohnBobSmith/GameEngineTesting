#include "KPropPlatform.hpp"
#include "KGameEngine.hpp"

KPropPlatform::KPropPlatform()
{
    KGameEngine kgameengine;

    defaultPlatformTexture = kgameengine.load_texture_from_disk("textures/platform.png");

    defaultPlatformPosition.x = 300;
    defaultPlatformPosition.y = 300;
}

KPropPlatform::~KPropPlatform()
{
    //Nothing to do currently.
}

void KPropPlatform::create_platform()
{
    for (int i = 0; i < maxPlatforms; i++) {
        worldGameObjectStorage[i]->objectTexture = defaultPlatformTexture;
        worldGameObjectStorage[i]->objectPosition = defaultPlatformPosition;
        worldGameObjectStorage[i]->objectSprite.setTexture(worldGameObjectStorage[i]->objectTexture);
        worldGameObjectStorage[i]->objectSprite.setPosition(worldGameObjectStorage[i]->objectPosition);
        worldGameObjectStorage[i]->objectSprite.setScale(0.5, 0.5);
    }
}

void KPropPlatform::position_platform(float offsetX, float offsetY, int platformIndex)
{
    worldGameObjectStorage[platformIndex]->objectSprite.setPosition(offsetX, offsetY);
}
