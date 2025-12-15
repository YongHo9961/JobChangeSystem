#include "Monster.h"
#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

void Monster :: attack(Player* player) {
	int damage = getPower() - player->getDefence();
	if (damage <= 0) {
		damage = 1;
	}
	if (HP > 0) {
		cout << getName() << "의 몸통박치기!!" << endl;
		cout << "플레이어는 " << damage << "만큼 체력이 닳았습니다." << endl;
		player->setHp(player->getHp() - damage);
		if (player->getHp() - damage <= 0) {
			player->setHp(0);
		}
		if (player->getHp() > 0) {
			cout << "플레이어의 체력은 " << player->getHp() << "만큼 남았다." << endl;
		}
		else {
			cout << "플레이어의 체력이 모두 닳았다." << endl;
			cout << "플레이어의 눈 앞이 깜깜해진다..." << endl;
		}
	}
	else {

	}
}

string Monster :: getName() {
	return Name;
}

int Monster :: getHP() {
	return HP;
}

int Monster::getPower() {
	return Power;
}

int Monster::getDefence() {
	return Defence;
}

int Monster::getSpeed() {
	return Speed;
}

void Monster::setName(string name) {
	Name = name;
}

void Monster::setHP(int hp) {
	HP = hp;
}

void Monster::setPower(int power) {
	Power = power;
}

void Monster::setDefence(int defence) {
	Defence = defence;
}

void Monster::setSpeed(int speed) {
	Speed = speed;
}