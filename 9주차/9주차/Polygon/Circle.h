#ifndef CIRCLE_H
#define CIRCLE_H
//클래스 선언부
#include <iostream>
using namespace std;

class Circle {
private:
	int radius; //멤버 변수
public:
	Circle();
	Circle(int r);
	~Circle();

	void setRadius(int radius); //멤버 함수
	int getRadius();
	double setArea();
};
#endif