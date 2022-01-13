#include "../include/good_creature.h"

using namespace std;

GoodCreature::GoodCreature(const string &creature_name, const int &L,
                           const int &threshold)
    : Creature(creature_name, L, threshold) {
}

void GoodCreature::bless() {
    Creature::bless();
}

Creature *GoodCreature::clone() {
    return new GoodCreature(name, L, threshold);
}

void GoodCreature::handle_threshold(Creature **society, const int &N,
                                    int index) {
    if (++index == N) {
        index = 0;
    }
    delete society[index];

    society[index] = this->clone();
}

string GoodCreature::get_type() {
    return "good";
}
