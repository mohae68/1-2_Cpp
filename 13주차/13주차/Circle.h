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

	void Draw();
};
#endif
