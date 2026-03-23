#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	double getArea() { return 3.14 * radius * radius; }
};
#endif
