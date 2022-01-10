#pragma once

#include <string>

class Creature {
    std::string name;
bool is_zombie;

  public:
    int L;

    Creature(const std::string &creature_name, const int &L);

    std::string get_name();

    virtual Creature *clone();

    virtual void bless();
    void beat();

    bool is_a_zombie();
};
