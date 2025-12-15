#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"


using namespace std;

class Player {
protected:
	string job_name = "초보자";
	string nickname;
	int Level = 1;
	int HP = 20;
	int MP = 20;
	int Power = 20;
	int Defence = 20;
	int Accuracy = 20;
	int Speed = 20;


public:
	Player(string nickname):nickname(nickname) {

	}
	virtual void attack() = 0;

	void printPlayerStatus() {
		cout << "===============캐릭터 정보창===============" << endl;
		cout << "직업: " << job_name << " 닉네임: " << nickname << endl;
		cout << "HP: " << HP << " MP: " << MP << endl;
		cout << "Power: " << Power << " Defence: " << Defence << endl;
		cout << "Accuracy: " << Accuracy << " Speed: " << Speed << endl;
	}
	

};

class Warrior : public Player {

public:
	Warrior(string nickname) : Player(nickname) {
		job_name = "Warrior";
		HP = 40;
		Defence = 40;
		Speed = 10;
	}
	void attack() {
		cout << "파워 스트라이크!!" << endl;
	}



};

class Magician : public Player {
public:
	Magician(string nickname) : Player(nickname) {
		job_name = "Magiian";
		HP = 10;
		MP = 40;
		Power = 40;
		Defence = 10;
	}

	void attack() {
		cout << "매직 미사일!!" << endl;
	}

};

class Thief : public Player {
public:
	Thief(string nickname):Player(nickname) {
		job_name = "Thief";
		Power = 30;
		Accuracy = 30;
		Speed = 40;
	}
	void attack() {
		cout << "럭키 세븐!!" << endl;
	}

};

class Archer :public Player {
public:
	Archer(string nickname) : Player(nickname) {
		job_name = "Archer";
		Power = 35;
		Defence = 10;
		Accuracy = 40;
		Speed = 30;

	}
	void attack() {
		cout << "더블 샷!!" << endl;
	}

};


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

	while (1) {
		cout << "직업선택을 완료했습니다!" << endl;
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