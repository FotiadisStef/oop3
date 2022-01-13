#pragma once

#include "bad_creature.h"
#include "creature.h"
#include "good_creature.h"

class CreatureSociety {
    int num_of_creatures;
    Creature **society;

  public:
    int no_of_good();
    int no_of_zombies();

    CreatureSociety(const int &N, const int &L, const int &good_thrsh,
                    const int &bad_thrsh);
    ~CreatureSociety();

    void run(const int &M);
};
