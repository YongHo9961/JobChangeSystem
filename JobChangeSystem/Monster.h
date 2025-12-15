
#ifndef Monster_h_
#define Monster_h_
#include "Player.h"
#include <string>


using namespace std;


class Monster {
public:
	Monster(string name) : Name(name) {
		HP = 10;
		Power = 30;
		Defence = 10;
		Speed = 10;
	}

	void attack(Player* player);

	string getName();
	int getHP();
	int getPower();
	int getDefence();
	int getSpeed();

	void setName(string name);
	void setHP(int Hp);
	void setPower(int power);
	void setDefence(int defence);
	void setSpeed(int speed);


protected:
	string Name;
	int HP;
	int Power;
	int Defence;
	int Speed;
};





#endif
