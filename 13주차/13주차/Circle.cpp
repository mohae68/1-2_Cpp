#include "Circle.h"

Circle::Circle()
{}
Circle::~Circle()
{
	cout << "Circle Delete ...." << endl;
}
void Circle::Draw() 
{
	//Polygon::Draw(); //정적 바인딩, 베이스 클래스 함수 직접 호출
	cout << "원을 그립니다" << endl;
}