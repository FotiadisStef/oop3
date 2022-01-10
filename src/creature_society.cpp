#include <cstdlib>
#include <iostream>
#include <string>

#include "../include/creature_society.h"

using namespace std;

CreatureSociety ::CreatureSociety(const int &N) {
    this->society = new Creature *[N];
    for (int i = 0; i < N; i++) {
        if (rand() % 2 == 0) {
            string name = "Elf" + to_string(i);
            // this->society[i] = new GoodCreature()
        } else {
        }
    }
}
