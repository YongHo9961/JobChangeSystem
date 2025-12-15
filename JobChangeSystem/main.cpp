#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"


using namespace std;




int main() {
	Player* P1 = nullptr;
	string nickname;
	Warrior W(nickname);
	Magician M(nickname);
	Thief T(nickname);
	Archer A(nickname);
	int JobChoice;
	int NumChoice;

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
		cout << "1.공격 2.캐릭터정보 3.게임종료" << endl;
		cin >> NumChoice;
		switch (NumChoice) {
		case 1:
			P1->attack();
			break;
		case 2:
			P1->printPlayerStatus();
			break;
		case 3:
			cout << "게임을 종료합니다." << endl;
			exit(0);
			break;
		default:
			cout << "숫자를 잘못 입력하였습니다. 다시 입력해주세요." << endl;
			break;
		}
	}
	

	delete P1;
	return 0;
}