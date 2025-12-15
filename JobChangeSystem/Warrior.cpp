#include "Warrior.h"
#include <iostream>

using namespace std;


void Warrior :: attack() {
	cout << "파워 스트라이크!!" << endl;
}

void Warrior::attack(Monster* monster) {
	int damage = Power - monster->getDefence();
	if (damage <= 0) {
		damage = 1;
		cout << "파워 스트라이크!!" << endl;
		cout << monster->getName() << "은 " << damage << "만큼의 피해를 입었다." << endl;
		monster->setHP(monster->getHP() - damage);
		if (monster->getHP() - damage <= 0) {
			monster->setHP(0);
		}
		
		if (monster->getHP() > 0) {
			cout << monster->getName() << "의 체력은 " << monster->getHP() << "만큼 남았다." << endl;
		}
		else {
			cout << monster->getName() << "이 쓰러졌다!!" << endl;
			cout << "플레이어는 승리했다!!" << endl;
		}
	}
	}