#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	int radius;
public:
	Circle();
	~Circle();
	void SetRadius(int r);
	double GetArea();
};

#endif