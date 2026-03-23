//서클 클래스 구현부
#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() //생성자 함수
{
	cout << "Circle 객체를 생성합니다. " << endl;
}
Circle::~Circle() //소멸자 함수
{
	cout << "Circle 객체를 소멸합니다. " << endl;
}
