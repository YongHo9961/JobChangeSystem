#include "Thief.h"
#include <iostream>

using namespace std;

void Thief :: attack() {
	cout << "럭키 세븐!!" << endl;
}
void Thief::attack(Monster* monster) {
	int damage = Power - monster->getDefence();
	if (damage/5 <= 0) {
		damage = 1;
	}
	cout << "새비지 블로우!1" << endl;
	for (int i = 0; i < 5; i++) {
		monster->setHP(monster->getHP() - (damage / 5));
		cout << monster->getName() << "에게 " << damage / 5 << "만큼 피해를 입혔다." << endl;
		if (monster->getHP() - (damage / 5) <= 0) {
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