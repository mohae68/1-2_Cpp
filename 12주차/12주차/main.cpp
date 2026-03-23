#pragma region 예제 8-2
//#예제 8-2
//#include "ColorPoint.h"
//#include "Point.h"
//#include <iostream>
//using namespace std;
//
//int main() {
//	Point p;
//	p.set(2, 3);
//	p.x = 5;
//	p.y = 5;
//	p.showPoint();
//
//	ColorPoint cp;
//	cp.x = 10;
//	cp.y = 10;
//	cp.set(3, 4);
//	cp.setColor("Red");
//	cp.showColorPoint();
//
//	ColorPoint cp2;
//	cp2.set(3, 4);
//	cp2.setColor("Red");
//	cout << ((cp.equals(cp2)) ? "true" : "false");
//}
#pragma endregion

#include "Polygon.h"
#include "Circle.h"
#include "Rectangle.h"
#include "GraphicsManager.h"

int main()
{
	#pragma region 실습1
	////객체를 만든 것
	//Polygon p;
	//Circle c;

	////포인터 변수
	//Polygon* pBase = &c; //업캐스팅 (자식주소->아빠포로 치환)
	//pBase->Draw(); //아빠 묵살돼서, 자식 호출됨 원을 그립니다

	//Circle* pDer = &c;
	//pDer->Draw();//자식 호출됨 원을 그립니다
	//((Circle*)pBase)->Draw(); //다운 캐스팅 아빠 묵살해서 원을 그립니다

#pragma endregion

	#pragma region 실습2
	//Circle* pDer = new Circle(); //동적 생성
	//pDer->Draw();
	//delete pDer;

	////Polygon* pBase = new Circle(); //업캐스팅
	////pBase->Draw(); //폴리곤 헤더파일에 버추얼을 추가했기 때문에 다운 캐스팅을 하지 않아도 호출 ㄱㄴ!!
	/////*((Circle*)pBase)->Draw();*/ //버츄얼 안 해주면 다운 캐스팅 해줘야 됨!
	////delete pBase;

	//Rectangle* pRec = new Rectangle();
	//pRec->Draw();
	//delete pRec;

	///*Polygon* pArray[10];
	//for (int i = 0; i < 10; i++) {
	//	pArray[i] = new Circle();
	//	pArray[i]->Draw();
	//}*/
	//
	///*delete [] pArray;*/
#pragma endregion

	#pragma region ppt 오버라이딩의 목적 부분
	//GraphicsManager* gm = new GraphicsManager;
	//gm->Pain(new Circle()); //원을 그립니다
	//gm->Pain(new Rectangle()); //사각형을 그립니다
	//gm->Pain(new Circle());

	///*gm->Pain(new Circle());
	//gm->Pain(new Rectangle());
	//gm->Pain(new Circle());*/
	//delete gm;
	#pragma endregion

	#pragma region 예제 9-2
//	//9장 예제 9-2 오버라이딩과 가상 함수 호출(13주차)
	GraphicsManager* gm = new GraphicsManager();
	gm->Pain(new Circle());
	gm->Pain(new Rectangle());
	delete gm;
	#pragma endregion

	return 0;
}
