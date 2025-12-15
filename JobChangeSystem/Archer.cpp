#include "Archer.h"
#include "Monster.h"
#include <string>
#include <iostream>

using namespace std;


void Archer::attack(Monster* monster) {
	int damage = (Power - monster->getDefence()) / 3;
	if (damage <= 0) {
		damage = 1;
	}
	cout << "트리플 샷!!" << endl;
	for (int i = 0; i < 3; i++) {
		monster->setHP(monster->getHP() - damage );
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