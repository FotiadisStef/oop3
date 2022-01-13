#pragma once

#include <string>

class Creature {
    bool is_zombie;

  protected:
    std::string name;
    int threshold;

  public:
    int L;

    Creature(const std::string &creature_name, const int &L,
             const int &threshold);
    virtual ~Creature();

    std::string get_name();

	virtual Creature *clone();
    virtual void handle_threshold(Creature **society, const int &N, int index);

    virtual void bless();
    void beat();

    bool is_a_zombie();

    bool reached_threshold();

    virtual std::string get_type();
};
