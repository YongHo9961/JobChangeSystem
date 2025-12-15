#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"


using namespace std;




int main() {
	Player* P1 = nullptr;
	string nickname;
	Warrior W(nickname);
	Magician M(nickname);
	Thief T(nickname);
	Archer A(nickname);
	Monster Mon("슬라임");
	int JobChoice;
	int NumChoice1;
	int NumChoice2;

	cout << "안녕하세요 용사님" << endl;
	cout << "닉네임을 입력해주세요." << endl;
	getline(cin, nickname);
	cout << "직업을 선택해주세요." << endl;
	cout << "1.Warrior 2.Magician 3.Thief 4.Archer" << endl;
	cin >> JobChoice;
	switch (JobChoice) {
	case 1:
		P1 = &W;
		break;
	case 2:
		P1 = &M;
		break;
	case 3:
		P1 = &T;
		break;
	case 4:
		P1 = &A;
		break;
	default:
		cout << "숫자를 잘못 입력하셨습니다." << endl;
		break;
	}
	cout << "직업선택을 완료했습니다!" << endl;

	while (1) {
		cout << "무엇을 하시겠습니까?" << endl;
		cout << "1.던전입장 2.캐릭터정보 3.게임종료" << endl;
		cin >> NumChoice1;
		switch (NumChoice1) {
		case 1:
			cout << "던전에 입장했습니다." << endl;
			cout << "앗!! "<< Mon.getName() << "이 나타났다!!" << endl;
			while (1) {
				cout << "1.전투 2.몬스터정보보기 3.도망치기" << endl;
				cin >> NumChoice2;
				if (NumChoice2 == 1) {
					if (P1->getSpeed() >= Mon.getSpeed()) {
						P1->attack(&Mon);
						Mon.attack(P1);
					}
					else {
						Mon.attack(P1);
						P1->attack(&Mon);
					}

					if (P1->getHp() <= 0 || Mon.getHP() <= 0) {
						cout << "전투 종료!!" << endl;
						exit(0);
					}
				}
				else if (NumChoice2 == 2) {
					cout << "몬스터 이름: " << Mon.getName() << endl;
					cout << "HP: " << Mon.getHP() <<" POWER: " << Mon.getPower() << endl;
					cout << "Defence: " << Mon.getDefence() << " Speed: " << Mon.getSpeed() << endl;
				}
				else if (NumChoice2 == 3) {
					cout << "던전에서 탈출합니다" << endl;
					break;
				}
				else {
					cout << "잘못된 번호를 입력했습니다. 다시 입력해주세요." << endl;
				}
				cout << endl;
			}
			break;
		case 2:
			P1->printPlayerStatus();
			break;
		case 3:
			cout << "게임을 종료합니다." << endl;
			exit(0);
		default:
			cout << "숫자를 잘못 입력하였습니다. 다시 입력해주세요." << endl;
			break;
		}
		cout << endl;
	}
	

	delete P1;
	return 0;
}