#ifndef Archer_h_
#define Archer_h_
#include <string>
#include "Player.h"

using namespace std;

class Archer : public Player {
public:
	Archer(string nickname) : Player(nickname) {
		job_name = "Archer";
		Power = 35;
		Defence = 10;
		Accuracy = 40;
		Speed = 30;

	}

	void attack();
	void attack(Monster* monster);


};





#endif

