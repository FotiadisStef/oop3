#include <iostream>

#include "../include/creature.h"

using namespace std;

Creature::Creature(string creature_name, int L) {
    this->creature_name = creature_name;
    this->L = L;
    cout << "Creature Created" << endl;
}

Creature::~Creature() {
    cout << "Creature Destroyed" << endl;
}

void Creature::bless() {
    if (!is_a_zombie()) {
        this->L++;
    }
}

void Creature::beat() {
    if (!is_a_zombie()) {
        if (--this->L == 0) {
            this->is_zombie = true;
        }
    }
}

Creature *Creature::clone(Creature *clonedCreature) {
}

bool Creature::is_a_zombie() {
    if (L == 0) {
        return true;
    }

    return false;
}
