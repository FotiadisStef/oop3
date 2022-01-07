#include <string>

using namespace std;

class Creature {
    bool is_zombie;
    bool is_good;
	bool oogabooga;

  public:
    string creature_name;
    int L;

    Creature(string creature_name, int L);
    ~Creature();

    void bless();
    void beat();
    Creature *clone(Creature *clonedCreature);

    bool is_a_zombie();
};
