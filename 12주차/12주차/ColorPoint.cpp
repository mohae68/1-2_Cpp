#include "ColorPoint.h"

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); //Point 클래스의 showPoint() 호출
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color)
		return true;
	else
		return false;
}