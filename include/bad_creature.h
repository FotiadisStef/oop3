#pragma once

#include "creature.h"

class BadCreature : public Creature {
    bool is_good = false;
    int bad_thrsh;

  public:
	BadCreature(const std::string &creature_name, const int &L);

    void bless();

    Creature *clone();
};
