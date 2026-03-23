//10주차 리포트 나간대 (스타크래프트 게임 저그만 구현했음)
#include "Starcraft/Zerg.h" //starcraft 폴더에 Zerg.h 파일을 추가한 거
#include "GameManager.h"

int main() 
{
   //#1 저그 클래스 연습한 거
	/*Zerg z;
	z.Positionlnit(); 
	z.Print();*/

   //#2 스타크래프트 종족 생성후 랜덤으로 hp와 포지션 배정후 출력하는 프로그램
	GameManager *myGame = new GameManager(); //동적 객체 생성
	myGame->Run();

	delete myGame; //동적 객체 사라짐
	 
   //#2.1 디폴트 생성자를 만들어 주면 기본형태도 ㄱㄴ, 오버로딩형태도 ㄱㄴ
	/*Zerg z1;
	Zerg z2(10);*/

   //#2.2 static 멤버 생성한 거 호출
	/*Zerg::Attack = 10;*/ 

	return 0;
}