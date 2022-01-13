#pragma once

#include "creature.h"
#include <string>

class BadCreature : public Creature {
    bool is_good = false;

  public:
    BadCreature(const std::string &creature_name, const int &L,
                const int &threshold);

    void bless();

    Creature *clone();
    void handle_threshold(Creature **society, const int &N, int index);

    std::string get_type();
};
