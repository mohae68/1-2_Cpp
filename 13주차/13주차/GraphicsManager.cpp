#include "GraphicsManager.h"
#include "Circle.h"
#include "Rectangle.h"

GraphicsManager::GraphicsManager() //포인터 변수 초기화 반드시 널값으로 해줘야 된다! 
{
	pStart = NULL; //널값(0)으로 초기화. 널은 0보다는 무를 말함.
	pLast = NULL;
}
GraphicsManager::~GraphicsManager() {

}

void GraphicsManager::Run() {
	Add();
	Paint();
}

void GraphicsManager::Add() //여기 시험 문제로 나올거임!!
{ 
	//pstart와 plast의 포인터 변수를 만들어 줌
	Polygon* pStart = new Circle(); //처음 객체 생성
	Polygon* pLast = pStart; //주소를 넘겨줌(할당한다)

	//핵심 포인트라고 강조 조지게 함
	pLast = pLast->Add(new Circle()); //plast가 add함수의 리턴 값을 받음 
	pLast = pLast->Add(new Rectangle());
	pLast = pLast->Add(new Circle());
}
//plast는 항상 null값을 지니고 있음

void GraphicsManager::Paint() 
{
	Polygon* p = pStart;
	while (p != NULL)
	{
		p->Draw();
		p = p->GetNext();
	}
}

void GraphicsManager::Pain(Polygon* p) //*폴리곤 타입으로만 받을 수 있음 여기서 업캐스팅
{
	p->Draw(); //동적 바인딩, 다운캐스팅
}