#include "Circle.h"

Circle::Circle() { //생성자 역할: 멤버 변수를 초기화하기 위함
	radius = 1;
	cout << "생성자 실행: " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행: " << radius << endl;
}
Circle::Circle(int r) { //오버로딩 생성자
	radius = r;
	cout << "생성자 실행: " << radius << endl;
}
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::setArea() {
	return 3.14 * radius * radius;
}
int Circle::getRadius() {
	return radius;
}
