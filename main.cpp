#include "KGameEngine.hpp"
#include "KGameState.hpp"
#include "KGameObject.hpp"
#include "KGame.hpp"
#include "KPlayer.hpp"
#include "KPropPlatform.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    srand(time(0));

    sf::Event event;

    KGameEngine kgameengine;
    KPropPlatform kpropplatform;
    KGameObject kgameobject;

    kpropplatform.create_platform();

    while (kgameengine.window.isOpen()) {
        while (kgameengine.window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                kgameengine.window.close();
            }
        }

        kgameengine.window.clear(sf::Color::Black);

        for (int i = 0; i < kgameobject.maxGameObjects; i++) {
            kgameengine.update(kpropplatform.worldGameObjectStorage[i]->objectSprite);
        }

        kgameengine.window.display();
    }
}
