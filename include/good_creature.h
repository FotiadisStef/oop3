#pragma once

#include "creature.h"

class GoodCreature : public Creature {
    bool is_good = true;

  public:
    GoodCreature(const std::string &creature_name, const int &L,
                 const int &threshold);

    void bless();

    Creature *clone();
    void handle_threshold(Creature **society, const int &N, int index);

    std::string get_type();
};
