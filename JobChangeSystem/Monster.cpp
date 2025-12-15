#include "Monster.h"
#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

void Monster :: attack(Player* player) {

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