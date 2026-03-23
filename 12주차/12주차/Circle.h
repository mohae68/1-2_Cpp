#ifndef  CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Polygon.h"
using namespace std;

class Circle : public Polygon
{
private:

public:
	Circle();
	~Circle();

	virtual void Draw(); //오버라이딩 (동적 바인딩)
};
#endif
