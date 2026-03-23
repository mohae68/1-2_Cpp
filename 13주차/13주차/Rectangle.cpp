#include "Rectangle.h"

Rectangle::Rectangle()
{}
Rectangle::~Rectangle()
{}
void Rectangle::Draw() 
{
	Polygon::Draw(); //정적 바인딩, 베이스 클래스 함수 직접 호출
	cout << "사각형을 그립니다" << endl;
}