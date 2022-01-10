#pragma once

#include "bad_creature.h"
#include "creature.h"
#include "good_creature.h"

class CreatureSociety {
    int num_of_creatures;
    Creature **society;

  public:
    CreatureSociety(const int &N);

    int no_of_good();

    int no_of_zombies();
};
