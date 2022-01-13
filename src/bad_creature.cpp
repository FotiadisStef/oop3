#include "../include/bad_creature.h"

using namespace std;

BadCreature ::BadCreature(const string &creature_name, const int &L,
                          const int &threshold)
    : Creature(creature_name, L, threshold) {
}

void BadCreature::bless() {
    Creature::bless();
}

Creature *BadCreature::clone() {
    return new BadCreature(name, L, threshold);
}

void BadCreature::handle_threshold(Creature **society, const int &N,
                                   int index) {
    if (++index == N) {
        index = 0;
    }
    while (society[index]->is_a_zombie()) {
        delete society[index];
        society[index] = this->clone();

        index++;
    }
}

string BadCreature::get_type() {
    return "bad";
}
