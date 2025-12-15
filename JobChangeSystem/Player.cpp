#include "Player.h"
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