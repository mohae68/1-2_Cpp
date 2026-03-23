//클래스 구현부
#include "GameManager.h"

GameManager::GameManager()
{

}
GameManager::~GameManager() //여기 소멸시켜주는 거 중요
{
	delete[]zArray;
}
void GameManager::Run()
{
	CreateUnits();
}
void GameManager::CreateUnits()
{
	int selectUnit; // 종족 선택을 위한 변수 선언
	int createNum; //몇 개를 만들 건지

	cout << "어떤 종족을 선택하시겠습니까?" << endl;
	cout << "1:저그  2:프로토스  3:테란" << endl;
	cin >> selectUnit;

	srand((unsigned int)time(0)); //*중요한 코드*->이거 없으면 두 번이상 실행했을때, 처음 실행한 값과 다음 값이 똑같이 나오므로 0으로 초기화 해주는 거임

	switch (selectUnit) //swith문
	{
	case Unit::ZERG: //1의 값이 들어오면 실행
		cout << "저그를 몇마리 생성하시겠습니까?" << endl;
		cin >> createNum; //개수를 입력받아서 저장함
		zArray = new Zerg[createNum](); //입력받은 개수만큼 동적으로 배열 생성
		for (int i = 0; i < createNum; i++) 
		{
			/*(zArray + i)->SetHP(rand() % 10);
			(zArray + i)->Positionlnit();
			(zArray + i)->Print();*/ //아래 코드랑 같은 코드 방식만 다른거임

			zArray[i].SetHP(rand() % 10);
			zArray[i].Positionlnit(); //여기서 체력이랑 포지션이 랜덤으로 배정됨
			zArray[i].Print(); //호출하는 함수
		}
		break;
	case Unit::PROTOSS: //2의 값이 들어오면 프로토스로
		break;
	case Unit::TERAN: //3의 값이 들어오면 테란으로
		break;
	}
}
