#ifndef Magican_h_
#define Magician_h_
#include <string>
#include "Player.h"

using namespace std;

class Magician : public Player {
public:
	Magician(string nickname) : Player(nickname) {
		job_name = "Magician";
		HP = 10;
		MP = 40;
		Power = 40;
		Defence = 10;
	}
	void attack();
	void attack(Monster* monster);
};

#endif
