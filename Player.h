#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    // attributes
    std::string name{ "Player" };
    int health{ 100 };
    int xp{ 0 };

    // class can support operations or functions (method)
    void talk(std::string text_say);
    bool is_dead();
};

#endif // PLAYER_H
