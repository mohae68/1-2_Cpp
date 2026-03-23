#include <iostream>
#include "./Polygon/Circle.h"
using namespace std;

#pragma region 값, 주소, 참조에 의한 전달 방식 연습
//
//int sum(int x, int y) //값에 의한 호출
//{
//	int total = x + y;
//	return x + y;
//}
//
//int sum(int* px, int* py) //주소에 의한 호출
//{
//	int total = (*px) + (*py);
//	return total;
//}
//
//int sum1(int& rx, int& ry) //참조에 의한 호출 방법 &rx는 별명임 예시로 유재석의 별명은 메뚜기처럼 메뚜기가 &rx
//{
//	int total = rx + ry;
//	return total;
//}
//
//int main()
//{
//	cout << "값에 의한 방식:" << sum(10, 20) << endl; //이것이 값에 의한 전달 방식
//
//	int num1 = 10; //num1의 별명이 rx
//	int num2 = 20; //num2의 별명이 ry가 되는거
//	cout <<"주소에 의한 방식:" << sum(&num1, &num2) << endl; // 주소에 의한 전달 방식
//	int a = 5, b = 3;
//	cout << "참조에 의한 방식:" << sum1(a, b) << endl; // 참조에 의한 전달 방식
//
//	return 0;
//}
#pragma endregion

#pragma region 예제 5-1

//void increase(Circle c) 
//{
//	int r = c.getRadius(); //여기에 c.getRadius() + 1 해도 똑같음
//	c.setRadius(r + 1);
//}
//
//void increase(Circle* pc)
//{
//	int r = pc->getRadius();
//	pc->setRadius(r + 1);
//}
//
//int main()
//{
//	Circle waffle(30); //객체 생성과 오버로딩 생성자 실행
//	increase(waffle); //increase를 빠져나오면서 c객체에 소멸자 실행
//	cout << waffle.getRadius() << endl; //값에 의한 전달 방식
//	//waffle이 메인함수를 벗어나면서 소멸자 실행 
//
//	increase(&waffle);
//	cout << waffle.getRadius() << endl; //주소에 의한 전달 방식
//
//	return 0;
//} 
#pragma endregion

#pragma region <문제1>:저그 객체를 하나 만든 후, 체력을 증가 시키는 방법 -> 구현 (increase()로 hp증가하기)
//위에 increase()함수에서는 radius였지만 이건 hp로 하기
//
//void increase(Circle c) {
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}
//
//void increase(Circle* pc) {
//	int r = pc->getRadius();
//	pc->setRadius(r + 1);
//}
//
//int main() {
//	Circle zerg(40);
//	increase(&zerg);
//	cout <<"저그의 증가된 hp: " << zerg.getRadius() << endl;
//
//	return 0;
//}

#pragma endregion

#pragma region <문제2>:manager클래스를 만들고, 매개변수 전달(주소에 의한 전달) 방식으로 hp 증가하기
//클래스 선언부
//class UnitManager {
//private:
//	int hp;
//public:
//	UnitManager();
//	UnitManager(int r);
//	~UnitManager();
//
//	void setRadius(int radius); //멤버 함수
//	int getRadius();
//	void increase(UnitManager c); //increase 함수
//	void increase(UnitManager* pc);
//	/*int sum(int x, int y);
//	int sum(int* px, int* py);
//	int sum2(int& rx, int& ry);*/
//};
//
////클래스 구현부
//UnitManager::UnitManager() { //생성자 역할: 멤버 변수를 초기화하기 위함
//	hp = 1;
//	cout << "생성자 실행: " << hp << endl;
//}
//UnitManager::~UnitManager() {
//	cout << "소멸자 실행: " << hp << endl;
//}
//UnitManager::UnitManager(int r) { //오버로딩 생성자
//	hp = r;
//	cout << "생성자 실행: " << hp << endl;
//}
//void UnitManager::setRadius(int hp) {
//	this->hp = hp;
//}
//int UnitManager::getRadius() {
//	return hp;
//}
//void UnitManager::increase(UnitManager c) {
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}
//void UnitManager::increase(UnitManager* pc) {
//	int r = pc->getRadius();
//	pc->setRadius(r + 1);
//}
//int UnitManager::sum(int x, int y)
//{
//	int total = x + y;
//	return x + y;
//}
//int UnitManager::sum(int* px, int* py)
//{
//	int total = (*px) + (*py);
//	return total;
//}
//int UnitManager::sum2(int& rx, int& ry)
//{
//	int total = rx + ry;
//	return total;
//}

//main 함수
//int main() {
//	UnitManager Zerg(100); //객체 생성과 오버로딩 생성자 실행
//	Zerg.increase(&Zerg);
//
//	cout << "저그의 증가된 체력: " << Zerg.getRadius() << endl;
//
//	return 0;
//}
#pragma endregion