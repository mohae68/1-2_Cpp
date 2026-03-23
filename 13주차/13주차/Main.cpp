#include "GraphicsManager.h"
#include "Circle.h"
#include "Rectangle.h"
//13주차(ppt 9장)

int main() 
{
	//9장 예제 9-2 오버라이딩과 가상 함수 호출
	GraphicsManager* gm = new GraphicsManager();
	gm->Pain(new Circle());
	delete gm;

	//가상 소멸자 연습
	/*Polygon* pBase = new Polygon(); //Polygon은 소멸자가 하나만 찍힘
	delete pBase;*/

	/*Circle* pDer = new Circle(); //Circled은 소멸자가 두개찍힘
	delete pDer;*/

	/*Polygon* pBase = new Polygon();
	delete pBase;*/

	//9장 p.21 동적 바인딩 실행 연습
	// 
	//pstart와 plast의 포인터 변수를 만들어 줌
	//Polygon* pStart = new Circle();
	//Polygon* pLast = pStart;
	//pLast = pLast->Add(new Circle()); //plast가 add함수의 리턴 값을 받음
	//pLast = pLast->Add(new Rectangle());
	//
	//Polygon* p = pStart;
	//while (p != NULL)
	//{
	//	p->Draw();
	//	p = p->GetNext();
	//}
	
	//GraphicsManager* gm = new GraphicsManager();
	//gm->Run(); //add(), print() 함수 호출한거임
	//delete gm;

	//추상 클래스를 단독으로 인스턴스 할 경우 -> 에러남
	//단순히 인터페이스 역할을 함
	/*Polygon* p = new Polygon();*/ //->얘는 안 됨.


	//Polygon* p = new Circle(); //이것만 ㄱㄴ
	return 0;
}