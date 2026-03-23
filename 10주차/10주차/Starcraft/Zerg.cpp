#include "Zerg.h"
//클래스 구현부

Zerg::Zerg() //기본 생성자는 멤버 변수 초기화하는 역할
{
	hp = 10;
}
Zerg::Zerg(int hp) 
{
	this->hp = hp; //this 연산자 중요함! 넘어온 hp값을 멤버변수 hp에 저장하라는 말임(멤버변수와 매개변수 이름이 같을 때)
}
Zerg::~Zerg() 
{

}
Zerg::Zerg(const Zerg& zerg)
{
	this->hp = zerg.hp;
	this->positionX = zerg.positionX;
	this->positionY = zerg.positionY;
}
void Zerg::SetHP(int hp) 
{
	this->hp = hp; //멤버변수에 매개변수로 넘어온 값을 담는다는 뜻
}
int Zerg::GetHP()
{
	return hp;
}
void Zerg::Positionlnit()
{
	this->hp = rand() % 10; //0~9까지의 랜덤함수
	this->positionX = rand() % 100; //0~99까지의 랜덤함수 실행 -> 자기 체력이 랜덤으로 배정됨
	this->positionY = rand() % 100; //0~99까지 랜덤함수 실행
}
void Zerg::Print() 
{
	cout << "저그" << " hp: " << GetHP() << "/ positionX: " << positionX
		<< " / positionY: " << positionY << endl;
}
