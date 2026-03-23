#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

//클래스 선언부
#include "Starcraft/Zerg.h"
#include <ctime> //c언에서는 time.h로 사용함 time때문에 써주어야 함

class GameManager
{
private:
	enum Unit { ZERG=1, PROTOSS, TERAN }; //이렇게 해두면 저그는 1로 되고 나머지는 자동으로 처리 프로토스는 2, 테란은 3으로 저장됨
	Unit unit = Unit::ZERG;

	Zerg* zArray;

public:
	GameManager();
	~GameManager();
	void CreateUnits();
	void Run();
};
#endif