#include "Thief.h"
#include "Monster.h"
#include <iostream>
#include <string>

using namespace std;


void Thief::attack(Monster* monster) {
	int damage = (Power - monster->getDefence()) / 5;
	if (damage <= 0) {
		damage = 1;
	}
	cout << "새비지 블로우!!" << endl;
	for (int i = 0; i < 5; i++) {
		monster->setHP(monster->getHP() - damage);
		cout << monster->getName() << "에게 " << damage << "만큼 피해를 입혔다." << endl;
		if (monster->getHP() <= 0) {
			monster->setHP(0);
			break;
		}
	}
		if (monster->getHP() > 0) {
			cout << monster->getName() << "의 체력은 " << monster->getHP() << "만큼 남았다." << endl;
		}
		else {
			cout << monster->getName() << "이 쓰러졌다!!" << endl;
			cout << "플레이어는 승리했다!!" << endl;
		}
}