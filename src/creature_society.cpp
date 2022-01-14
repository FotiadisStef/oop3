#include <cstdlib>
#include <iostream>
#include <string>
#include <typeinfo>

#include "../include/creature_society.h"

using namespace std;

CreatureSociety ::CreatureSociety(const int &N, const int &L,
                                  const int &good_thrsh, const int &bad_thrsh) {
    this->society = new Creature *[N];
    for (int i = 0; i < N; i++) {
        if (rand() % 2 == 0) {
            string name = "Elf" + to_string(i);
            this->society[i] = new GoodCreature(name, L, good_thrsh);
            cout << "placed " << name << " to position " << i << endl;
        } else {
            string name = "Orc" + to_string(i);
            this->society[i] = new BadCreature(name, L, bad_thrsh);
            cout << "placed " << name << " to position " << i << endl;
        }
    }
	this->num_of_creatures = N;
}

CreatureSociety::~CreatureSociety() {
    for (int i = 0; i < this->num_of_creatures; i++) {
        delete this->society[i];
    }
    delete[] this->society;
}

void CreatureSociety::run(const int &M) {
    for (int i = 0; i < M; i++) {
        int index = rand() % this->num_of_creatures;
        if (rand() % 2 == 0) { // bless
            this->society[index]->bless();
            cout << "Blessed creature: " << society[index]->get_name()
            << ", new life total: " << society[index]->L << endl;
            if (society[index]->reached_threshold()) { // clone
                this->society[index]->handle_threshold(
                    this->society, this->num_of_creatures, index);
            }
        } else { // beat
            this->society[index]->beat();
            cout << "Beat creature: " << society[index]->get_name()
            << ", new life total: " << society[index]->L << endl;
        }
    }

    int good_counter = 0, bad_counter = 0, zombie_counter = 0;
    for (int i = 0; i < num_of_creatures; i++) {
        if (society[i]->get_type() == "good") {
            good_counter++;
        } else if (society[i]->get_type() == "bad") {
            bad_counter++;
        } else if (society[i]->is_a_zombie()) {
            zombie_counter++;
        }
    }

    if (zombie_counter == num_of_creatures) {
        cout << "This is a Dead Society!" << endl;
    } else if (good_counter == num_of_creatures) {
        cout << "Good Dominates The World!" << endl;
    } else if (bad_counter == num_of_creatures) {
        cout << "Evil Dominates The World!" << endl;
    } else {
        cout << "Try again to Improve the World!" << endl;
    }
}
