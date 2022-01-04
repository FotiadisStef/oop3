#include "creature.h"

class BadCreature : public Creature {
    bool is_good;

  public:
    int bad_thrsh;
};
