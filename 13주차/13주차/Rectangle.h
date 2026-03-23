
#ifndef	RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Polygon.h"
using namespace std;

class Rectangle : public Polygon
{
private:

public:
	Rectangle();
	~Rectangle();

	void Draw();
};
#endif
