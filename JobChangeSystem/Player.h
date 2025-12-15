
#ifndef Player_h_
#define Player_h_
#include <string>

using namespace std;

class Monster;


class Player {
public:
	Player(string nickname) :nickname(nickname) {

	}
	virtual void attack(Monster* Monster) = 0;
	void printPlayerStatus();
	
	string getJobname();
	string getNickname();
	int getLevel();
	int getHp();
	int getMp();
	int getPower();
	int getDefence();
	int getAccuracy();
	int getSpeed();

	void setJobname(string jobname);
	void setHp(int hp);
	void setMp(int mp);
	void setPower(int power);
	void setDefence(int defence);
	void setAccuracy(int accuracy);
	void setSpeed(int speed);

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