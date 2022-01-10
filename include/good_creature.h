#pragma once

#include "creature.h"

class GoodCreature : public Creature {
    bool is_good = true;
    int good_thrsh;

  public:

    GoodCreature(const std::string &creature_name, const int &L);

    void bless();

    Creature *clone();
};
