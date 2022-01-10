#include "../include/good_creature.h"

using namespace std;

Creature::GoodCreature(const std::string &creature_name, const int &L) {
    // : Creature(const std::string &creature_name, const int &L)
}

void GoodCreature::bless() {
    Creature::bless();
    if (this->L >= this->good_thrsh) {
        Creature *clone();
    }
}

Creature *GoodCreature::clone() {
}
