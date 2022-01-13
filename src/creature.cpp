#include <iostream>

#include "../include/creature.h"

using namespace std;

Creature::Creature(const string &creature_name, const int &L,
                   const int &threshold) {
    this->name = creature_name;
    this->L = L;
    this->is_zombie = this->L ? false : true;
    this->threshold = threshold;
}

Creature::~Creature() {
}

string Creature::get_name() {
    return this->name;
}
Creature *Creature::clone() {
    return new Creature(name, L, threshold);
}
void Creature::handle_threshold(Creature **society, const int &N, int index) {
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

bool Creature::reached_threshold() {
    return this->L >= this->threshold;
}

string Creature::get_type() {
    return "none";
}
