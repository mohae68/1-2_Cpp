#ifndef  POLYGON_H
#define POLYGON_H

#include <iostream>
using namespace std;

//추상클래스가 아닌 기본 클래스이다. 
//실습: 기본 클래스 -> 추상 클래스로 바꾸기 (순수 가상함수 한개라도 있으면)
class Polygon
{
protected:
	Polygon* next; //결과적으로 여기에 해당된다고 이해하기
private:

public:
	Polygon();
	virtual ~Polygon();

	Polygon* Add(Polygon* p);
	Polygon* GetNext();
	/*virtual void Draw();*/ //이름을 자식과 똑같이 하는 것이 중요, 동적 바인딩 자식의 함수를 호출시킴

	virtual void Draw() = 0; //순수 가상 함수 (추상 매소드) 정적 바인딩
};

#endif
