#include "../include/good_creature.h"
#include "iostream"

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
    if (N == 1) {
        return;
    }

	string tmpName = society[index]->get_name();
    if (++index == N) {
        index = 0;
    }
    delete society[index];

    society[index] = this->clone();
    cout << "Cloned: " << tmpName
         << " to position: " << index << endl;
}

string GoodCreature::get_type() {
    return "good";
}
