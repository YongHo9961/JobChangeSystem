#ifndef Player_h_
#define Player_h_
#include "Monster.h"
#include <string>

using namespace std;

class Player {
public:
	Player(string nickname) :nickname(nickname) {

	}
	virtual void attack() = 0;
	void printPlayerStatus();

protected:
	string job_name = "ÃÊº¸ÀÚ";
	string nickname;
	int Level = 1;
	int HP = 20;
	int MP = 20;
	int Power = 20;
	int Defence = 20;
	int Accuracy = 20;
	int Speed = 20;



};









#endif