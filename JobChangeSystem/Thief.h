
#ifndef Thief_h_
#define Thief_h_
#include <string>
#include "Player.h"

using namespace std;

class Thief : public Player {
public:

	Thief(string nickname) :Player(nickname) {
		job_name = "Thief";
		Power = 30;
		Accuracy = 30;
		Speed = 40;
	}
	void attack(Monster* monster);
};

#endif // !Thuef_h_

