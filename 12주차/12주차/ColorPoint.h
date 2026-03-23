#ifndef COLORPOINT_H
#define COLORPOINT_H
#include "Point.h"

class ColorPoint:public Point {
	string color;
public:
	void setColor(string color);
	void showColorPoint();
	bool equals(ColorPoint p);
};
#endif
