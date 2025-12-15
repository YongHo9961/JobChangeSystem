#include "Player.h"
#include "Monster.h"
#include <iostream>
#include <string>

using namespace std;

void Player::printPlayerStatus() {
	cout << "===============캐릭터 정보창===============" << endl;
	cout << "직업: " << job_name << " 닉네임: " << nickname << endl;
	cout << "HP: " << HP << " MP: " << MP << endl;
	cout << "Power: " << Power << " Defence: " << Defence << endl;
	cout << "Accuracy: " << Accuracy << " Speed: " << Speed << endl;

}

string Player::getJobname() {
	return job_name;
}
string Player::getNickname() {
	return nickname;
}
int Player::getLevel() {
	return Level;
}
int Player::getHp() {
	return HP;
}
int Player::getMp() {
	return MP;
}
int Player::getPower() {
	return Power;
}
int Player::getDefence() {
	return Defence;
}
int Player::getAccuracy() {
	return Accuracy;
}
int Player::getSpeed() {
	return Speed;
}

void Player::setJobname(string jobname) {
	job_name = jobname;
}
void Player::setHp(int hp) {
	HP = hp;
}
void Player::setMp(int mp) {
	MP = mp;
}
void Player::setPower(int power) {
	Power = power;
}
void Player::setDefence(int defence) {
	Defence = defence;
}
void Player::setAccuracy(int accuracy) {
	Accuracy = accuracy;
}
void Player::setSpeed(int speed) {
	Speed = speed;
}





