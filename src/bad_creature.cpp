#include "../include/bad_creature.h"

using namespace std;

void BadCreature::bless() {
    Creature::bless();
    if (this->L >= this->bad_thrsh) {
        Creature *clone();
    }
}

Creature *BadCreature::clone() {
}
