#include "KGameObject.hpp"

KGameObject::KGameObject()
{
    worldGameObjectStorage.resize(maxGameObjects);

    for (int i = 0; i < maxGameObjects; i++) {
        worldGameObjectStorage[i] = new kGameObject;
    }
}

KGameObject::~KGameObject()
{
    for (int i = 0; i < maxGameObjects; i++) {
        delete worldGameObjectStorage[i];
    }
}
