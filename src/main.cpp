#include "../include/bad_creature.h"
#include "../include/good_creature.h"

using namespace std;

int myFunc(int c) {
	int a = 3;
	int b = 1;
	return c + b + a;
}

int main(){
	int c = 10;
	c = myFunc(c);
}
