#ifndef Warrior_h_
#define Warrior_h_
#include <string>
#include "Player.h"

using namespace std;

class Warrior : public Player {
public:

	Warrior(string nickname) : Player(nickname) {
		job_name = "Warrior";
		HP = 40;
		Defence = 40;
		Speed = 10;
	}
	void attack();


};
#endif // !Warrior_h_
