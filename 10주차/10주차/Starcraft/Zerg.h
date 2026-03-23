#ifndef ZERG_H //중복 방지
#define ZERG_H

#include <cstdlib> //rand 함수 때문에 (c에서 stdlib.h와 동일) srand(), rand() 함수를 사용 ㄱㄴ
#include <iostream>
//#include "Unit.h" //11주차 상속 시켜주기
using namespace std;

//클래스 선언부
class Zerg  {
	/*:*/ /*public Unit*/ //11주차 상속 시켜주기
private:
	int hp; //멤버 변수
	int positionX; //복사생성자에 대한 개념 알아야 됨
	int positionY;
public:
	/*static int Attack;*/ //static 멤버 생성

	Zerg(); //기본생성자
	Zerg(int hp); //오버로딩 생성자
	/*Zerg(int hp = 10);*/ //얘 쓰면 위에 두개 생성자 역할을 다 함, 디폴트 매개변수이면 한 줄로 쉽게 ㄱㄴ

	Zerg(const Zerg& zerg); //*복사 생성자 생성* const를 걸어주는게 좋대,, 고정시켜주는 애
	
	~Zerg(); //소멸자

	void SetHP(int hp);
	int GetHP();
	void Positionlnit();
	void Print();
};


#endif