#include <iostream>

#include "../include/creature_society.h"

using namespace std;

int main(int argc, char *argv[]) {
    int N = 0, M = 0, L = 0, good_thrsh = 0, bad_thrsh = 0;

    srand(time(NULL));

    if (argc != 6) {

        cout << "Invalid Arguments\n"
             << "Usage: " << argv[0] << " <N> <M> <L> <good_thrsh> <bad_thrsh>"
             << endl;
        return 1;
    }

    N = atoi(argv[1]);
    M = atoi(argv[2]);
    L = atoi(argv[3]);
    good_thrsh = atoi(argv[4]);
    bad_thrsh = atoi(argv[5]);

    CreatureSociety *Society = new CreatureSociety(N, L, good_thrsh, bad_thrsh);

    Society->run(M);

    delete Society;

    return 0;
}
