#include <iostream>

#include "../include/creature.h"

using namespace std;

Creature::Creature(const string &creature_name, const int &L) {
    this->name = creature_name;
    this->L = L;
    this->is_zombie = this->L ? false : true;
}

string Creature::get_name() {
    return this->name;
}

Creature *Creature::clone() {
    return new Creature(this->name, this->L);
}

void Creature::bless() {
    if (!this->is_zombie) {
        this->L++;
    }
}

void Creature::beat() {
    if (this->is_zombie) {
        return;
    }
    if (--this->L == 0) {
        this->is_zombie = true;
    }
}

bool Creature::is_a_zombie() {
    return this->is_zombie;
}
